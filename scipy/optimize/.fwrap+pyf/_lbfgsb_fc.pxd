from fwrap_ktp cimport *

cdef extern from "_lbfgsb_fc.h":
    void setulb "F_FUNC(setulb,SETULB)"(
        fwi_integer_t * n,
        fwi_integer_t * m,
        fwr_dbl_t * x,
        fwr_dbl_t * l,
        fwr_dbl_t * u,
        fwi_integer_t * nbd,
        fwr_dbl_t * f,
        fwr_dbl_t * g,
        fwr_dbl_t * factr,
        fwr_dbl_t * pgtol,
        fwr_dbl_t * wa,
        fwi_integer_t * iwa,
        char * task,
        fwi_integer_t * iprint,
        char * csave,
        fwl_logical_t * lsave,
        fwi_integer_t * isave,
        fwr_dbl_t * dsave,
        size_t task_len_,
        size_t csave_len_
    )
