import os
import sys
from os.path import join

projects = ["cluster", "fftpack", "integrate", "linalg", "ndimage", "odr", "optimize", 
            "signal", "special", "stats"]

if sys.platform != 'cli':
    print "ERROR: This setup script only works under IronPython"
    sys.exit(1)

src_dir = os.getcwd()


def msbuild(subproject, config):
    # Note: need to use devenv instead of msbuild because msbuild can't build
    # Intel Fortran (.vfproj) files.
    cmd = 'devenv %s.sln /Build %s' % (subproject, config)
    print cmd
    os.system(cmd)
    print "%s complete"


def build_subproject(subproject):
    print "##### %s ##### begin" % subproject
    dir_path = join(src_dir, "scipy", subproject)
    os.chdir(dir_path)
    if '--clean' in sys.argv:
        cmd = 'rd /s /q Release Debug'
        print cmd
        os.system(cmd)

    if '--release' in sys.argv:
        msbuild(subproject, "Release")
    else:
        msbuild(subproject, "Debug")

    os.chdir(src_dir)
    print "##### %s ##### end" % subproject


if __name__ == '__main__':
    for subproject in projects:
        build_subproject(subproject)
