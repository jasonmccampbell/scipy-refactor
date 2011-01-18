#cython: ccomplex=True

"""The calc_lwork module was generated with Fwrap v0.2.0dev_346d9b8.

Below is a listing of functions and data types.
For usage information see the function docstrings.

Functions
---------
gees(...)
geev(...)
gehrd(...)
gelss(...)
geqrf(...)
gesdd(...)
getri(...)
gqr(...)
heev(...)
syev(...)

"""
np.import_array()
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
__all__ = ['gehrd', 'gesdd', 'gelss', 'getri', 'geev', 'heev', 'syev', 'gees', 'geqrf', 'gqr']
cpdef object gehrd(object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi):
    """gehrd(prefix, n, lo, hi) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    n : fwi_integer, intent in
    lo : fwi_integer, intent in
    hi : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.gehrd(&min_lwork, &max_lwork, fw_prefix, &n, &lo, &hi, 1)
    return (min_lwork, max_lwork,)


cpdef object gesdd(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t compute_uv):
    """gesdd(prefix, m, n, compute_uv) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    compute_uv : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.gesdd(&min_lwork, &max_lwork, fw_prefix, &m, &n, &compute_uv, 1)
    return (min_lwork, max_lwork,)


cpdef object gelss(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t nrhs):
    """gelss(prefix, m, n, nrhs) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    nrhs : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.gelss(&min_lwork, &max_lwork, fw_prefix, &m, &n, &nrhs, 1)
    return (min_lwork, max_lwork,)


cpdef object getri(object prefix, fwi_integer_t n):
    """getri(prefix, n) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    n : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.getri(&min_lwork, &max_lwork, fw_prefix, &n, 1)
    return (min_lwork, max_lwork,)


cpdef object geev(object prefix, fwi_integer_t n, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1):
    """geev(prefix, n[, compute_vl, compute_vr]) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    n : fwi_integer, intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.geev(&min_lwork, &max_lwork, fw_prefix, &n, &compute_vl, &compute_vr, 1)
    return (min_lwork, max_lwork,)


cpdef object heev(object prefix, fwi_integer_t n, fwi_integer_t lower=0):
    """heev(prefix, n[, lower]) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    n : fwi_integer, intent in
    lower : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.heev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
    return (min_lwork, max_lwork,)


cpdef object syev(object prefix, fwi_integer_t n, fwi_integer_t lower=0):
    """syev(prefix, n[, lower]) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    n : fwi_integer, intent in
    lower : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.syev(&min_lwork, &max_lwork, fw_prefix, &n, &lower, 1)
    return (min_lwork, max_lwork,)


cpdef object gees(object prefix, fwi_integer_t n, fwi_integer_t compute_v=1):
    """gees(prefix, n[, compute_v]) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    n : fwi_integer, intent in
    compute_v : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.gees(&min_lwork, &max_lwork, fw_prefix, &n, &compute_v, 1)
    return (min_lwork, max_lwork,)


cpdef object geqrf(object prefix, fwi_integer_t m, fwi_integer_t n):
    """geqrf(prefix, m, n) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.geqrf(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
    return (min_lwork, max_lwork,)


cpdef object gqr(object prefix, fwi_integer_t m, fwi_integer_t n):
    """gqr(prefix, m, n) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : bytes, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t min_lwork, max_lwork
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    fc.gqr(&min_lwork, &max_lwork, fw_prefix, &m, &n, 1)
    return (min_lwork, max_lwork,)



cdef char fw_aschar(object s):
    cdef char* buf
    try:
        return <char>s # int
    except TypeError:
        pass
    try:
        buf = <char*>s # bytes
    except TypeError:
        s = s.encode('ASCII')
        buf = <char*>s # unicode
    if buf[0] == 0:
        return 0
    elif buf[1] != 0:
        return 0
    else:
        return buf[0]

# Fwrap configuration:
# Fwrap: version 0.2.0dev_346d9b8
# Fwrap: self-sha1 ae171eebe0ba45db91d6dbbd05c40bf021f08682
# Fwrap: pyf-sha1 9a9d6904d491517b565fdd032e7ff1582f9569ce
# Fwrap: wraps src/calc_lwork.f
# Fwrap:     sha1 9403c229ea6a86018979d6df550170cd2e1cef89
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary calc_lwork.pxd
# Fwrap: auxiliary calc_lwork_fc.h
# Fwrap: auxiliary calc_lwork_fc.pxd
