#!/usr/bin/env python
import tempfile
import subprocess
import os
import sys
import re
import shutil

from mako.template import Template

dotnet = False
if len(sys.argv) > 1 and sys.argv[1] == '--dotnet':
    dotnet = True

f = open('interpnd.pyx', 'r')
template = f.read()
f.close()

tmp_dir = tempfile.mkdtemp()
try:
    # Run templating engine
    fn = os.path.join(tmp_dir, 'interpnd.pyx')
    f = open(fn, 'w')
    f.write(Template(template).render())
    f.close()

    # Run Cython
    if dotnet:
        dst_name = 'interpnd.cpp'
        args_extra = ['--dotnet']
    else:
        dst_name = 'interpnd.c'
        args_extra = []
    dst_fn = os.path.join(tmp_dir, dst_name)
    
    ret = subprocess.call(['cython', '-I', '../..', '-o'] + args_extra + [dst_fn, fn])
    if ret != 0:
        sys.exit(ret)

    # Strip comments
    f = open(dst_fn, 'r')
    text = f.read()
    f.close()

    r = re.compile(r'/\*(.*?)\*/', re.S)

    text = r.sub('', text)
    f = open(dst_name, 'w')
    f.write(text)
    f.close()
finally:
    shutil.rmtree(tmp_dir)
