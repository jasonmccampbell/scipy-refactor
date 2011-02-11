
import sys

if sys.platform == 'cli':
    import clr
    clr.AddReference('special')
    from clr_specfun.module_specfun import *

