
import sys

if sys.platform == 'cli':
    import clr
    clr.AddReference('integrate')
    from scipy__integrate___quadpack import *


