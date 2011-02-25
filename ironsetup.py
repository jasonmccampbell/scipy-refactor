import os
import sys
import shutil
import tempfile
from os.path import dirname, isdir, isfile, join


if sys.platform != 'cli':
    print "ERROR: This setup script only works under IronPython"
    sys.exit(1)

src_dir = os.getcwd()


def msbuild(dir, config):
    # Note: need to use devenv instead of msbuild because msbuild can't build
    # Intel Fortran (.vfproj) files.
    os.chdir(join(src_dir, "scipy", dir))
    cmd = 'devenv %s.sln /Build %s' % (dir, config)
    print cmd
    os.system(cmd)
    print "%s complete"
    os.chdir(src_dir)

def buildall():
    for dir in ["special", "stats", "linalg", "integrate"]:
        msbuild(dir, "Debug")

if __name__ == '__main__':
    buildall()