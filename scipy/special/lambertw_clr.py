
import sys

if sys.platform == 'cli':
    import clr
    clr.AddReference('special')
    from clr_lambertw.module_lambertw import *

