from fwrap_ktp cimport *

cdef extern from "minpack2_fc.h":
    void dcsrch "F_FUNC(dcsrch,DCSRCH)"(
        fwr_dbl_t * stp,
        fwr_dbl_t * f,
        fwr_dbl_t * g,
        fwr_dbl_t * ftol,
        fwr_dbl_t * gtol,
        fwr_dbl_t * xtol,
        char * task,
        fwr_dbl_t * stpmin,
        fwr_dbl_t * stpmax,
        fwi_integer_t * isave,
        fwr_dbl_t * dsave,
        size_t task_len_
    )
    void dcstep "F_FUNC(dcstep,DCSTEP)"(
        fwr_dbl_t * stx,
        fwr_dbl_t * fx,
        fwr_dbl_t * dx,
        fwr_dbl_t * sty,
        fwr_dbl_t * fy,
        fwr_dbl_t * dy,
        fwr_dbl_t * stp,
        fwr_dbl_t * fp,
        fwr_dbl_t * dp,
        fwl_logical_t * brackt,
        fwr_dbl_t * stpmin,
        fwr_dbl_t * stpmax
    )
