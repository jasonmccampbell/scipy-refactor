#cython: ccomplex=True

"""
The calc_lwork module was generated with Fwrap v0.2.0dev_b7db3aa.

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

Data Types
----------
fw_character
fw_shape
fwi_integer

"""
np.import_array()
include 'fwrap_ktp.pxi'
cdef extern from "string.h":
    void *memcpy(void *dest, void *src, size_t n)
cpdef api object gehrd(object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi):
    """
    gehrd(prefix, n, lo, hi) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    n : fwi_integer, intent in
    lo : fwi_integer, intent in
    hi : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gehrd_c(&min_lwork, &max_lwork, fw_prefix, &n, &lo, &hi, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gehrd' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object gesdd(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t compute_uv):
    """
    gesdd(prefix, m, n, compute_uv) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    compute_uv : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gesdd_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &compute_uv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gesdd' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object gelss(object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t nrhs):
    """
    gelss(prefix, m, n, nrhs) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in
    nrhs : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gelss_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &nrhs, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gelss' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object getri(object prefix, fwi_integer_t n):
    """
    getri(prefix, n) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    n : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    getri_c(&min_lwork, &max_lwork, fw_prefix, &n, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'getri' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object geev(object prefix, fwi_integer_t n, fwi_integer_t compute_vl=1, fwi_integer_t compute_vr=1):
    """
    geev(prefix, n, compute_vl, compute_vr) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    n : fwi_integer, intent in
    compute_vl : fwi_integer, intent in
    compute_vr : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    geev_c(&min_lwork, &max_lwork, fw_prefix, &n, &compute_vl, &compute_vr, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'geev' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object heev(object prefix, fwi_integer_t n, fwi_integer_t lower=0):
    """
    heev(prefix, n, lower) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    n : fwi_integer, intent in
    lower : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    heev_c(&min_lwork, &max_lwork, fw_prefix, &n, &lower, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'heev' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object syev(object prefix, fwi_integer_t n, fwi_integer_t lower=0):
    """
    syev(prefix, n, lower) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    n : fwi_integer, intent in
    lower : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    syev_c(&min_lwork, &max_lwork, fw_prefix, &n, &lower, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'syev' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object gees(object prefix, fwi_integer_t n, fwi_integer_t compute_v=1):
    """
    gees(prefix, n, compute_v) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    n : fwi_integer, intent in
    compute_v : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gees_c(&min_lwork, &max_lwork, fw_prefix, &n, &compute_v, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gees' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object geqrf(object prefix, fwi_integer_t m, fwi_integer_t n):
    """
    geqrf(prefix, m, n) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    geqrf_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'geqrf' wrapper.")
    return (min_lwork, max_lwork,)


cpdef api object gqr(object prefix, fwi_integer_t m, fwi_integer_t n):
    """
    gqr(prefix, m, n) -> (min_lwork, max_lwork)

    Parameters
    ----------
    prefix : object_, intent in
    m : fwi_integer, intent in
    n : fwi_integer, intent in

    Returns
    -------
    min_lwork : fwi_integer, intent out
    max_lwork : fwi_integer, intent out

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fwi_integer_t min_lwork
    cdef fwi_integer_t max_lwork
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gqr_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gqr' wrapper.")
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
# Fwrap: version 0.2.0dev_b7db3aa
# Fwrap: self-sha1 ae171eebe0ba45db91d6dbbd05c40bf021f08682
# Fwrap: pyf-sha1 0000000000000000000000000000000000000000
# Fwrap: wraps src/calc_lwork.f
# Fwrap:     sha1 9403c229ea6a86018979d6df550170cd2e1cef89
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary calc_lwork.pxd
# Fwrap: auxiliary calc_lwork_fc.f
# Fwrap: auxiliary calc_lwork_fc.h
# Fwrap: auxiliary calc_lwork_fc.pxd

