#!/usr/bin/env python
""" Test functions for fftpack.convolve, in particular
behaviour of callbacks.

This is present to assist in switching from f2py to fwrap,
to make sure results are the same. True results are derived
from running the tests with an older SciPy with f2py.
"""

import sys
import traceback
import re
from numpy.testing import *
from scipy.fftpack import convolve

class TestCallback(TestCase):
    def test_extra_args(self):
        n = 10
        def kernel(k, aux1, aux2):
            assert aux1 == 10
            assert aux2 == 2
            return k
        omega = convolve.init_convolution_kernel(n, kernel, d=1, zero_nyquist=1,
                                                 kernel_func_extra_args=(10, 2))
        assert_array_almost_equal(omega, [ 0., 0.1, -0.1, 0.2, -0.2, 0.3, -0.3, 0.4, -0.4, 0.])

    def test_nested(self):
        n = 4
        trace = []

        def level3(k):
            trace.append('(3)')
            return 3 * k

        def level2(k):
            trace.append('<2')
            omega = convolve.init_convolution_kernel(n, level3, d=1, zero_nyquist=1)
            trace.append('2>')
            assert_array_almost_equal(omega, [ 0,  0.75, -0.75,  0.])
            return 2 * k

        def level1(k):
            trace.append('<1')
            omega = convolve.init_convolution_kernel(n, level2, d=1, zero_nyquist=1)
            trace.append('1>')
            return 1

        omega = convolve.init_convolution_kernel(n, level1, d=1, zero_nyquist=1)
        assert_equal(' '.join(trace), '<1 <2 (3) (3) 2> <2 (3) (3) 2> 1> '
                                      '<1 <2 (3) (3) 2> <2 (3) (3) 2> 1>')
        assert_array_almost_equal(omega, [ 0.25,  0.25, -0.25,  0.  ])

    def test_exception(self):
        n = 4

        class MyException(Exception):
            pass
        exc_container = [None]
        trace = []
        
        def level3(k):
            trace.append('(3)')
            if k == 1:
                e = exc_container[0] = MyException()
                raise e
            return 3 * k

        def level2(k):
            trace.append('<2')
            try:
                omega = convolve.init_convolution_kernel(n, level3, d=1, zero_nyquist=1)
            except:
                trace.append('2@')
                raise
            trace.append('2>')
            assert_array_almost_equal(omega, [ 0,  0.75, -0.75,  0.])
            return 2 * k

        def level1(k):
            trace.append('<1')
            try:
                omega = convolve.init_convolution_kernel(n, level2, d=1, zero_nyquist=1)
            except:
                trace.append('1@')
                raise
            trace.append('1>')
            return 1

        try:
            convolve.init_convolution_kernel(n, level1, d=1, zero_nyquist=1)
        except MyException, e:
            assert_(e is exc_container[0])
            
            _, _, tb = sys.exc_info()
            # Check that exception stack contains level1 -> level2 -> level3
            lines = traceback.format_tb(tb)
            ##print ''.join(lines)
            curlevel = 1
            for line in lines:
                if re.match(r'\s*File .*, line \d+, in level%d' % curlevel, line):
                    curlevel += 1
            assert_equal(curlevel, 4)
        else:
            assert_(False)
            
        assert_equal(' '.join(trace), '<1 <2 (3) (3) 2@ 1@')


def benchmark():
    """
    Function that can be called from IPython to do benchmarks
    using %timeit with different SciPy implementations.
    """
    n = 400

    def level2(k):
        return 2 * k

    def level1(k):
        omega = convolve.init_convolution_kernel(n, level2, d=1)
        return k

    convolve.init_convolution_kernel(n, level1, d=1)
    

if __name__ == "__main__":
    run_module_suite()
