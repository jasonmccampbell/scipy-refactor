
import sys

if sys.platform == 'cli':
    import clr
    clr.AddReference('optimize')
    #from scipy__optimize___minpack import minpack_error as error
    from scipy__optimize___minpack import *


