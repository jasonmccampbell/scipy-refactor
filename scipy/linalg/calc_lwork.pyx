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
cpdef api object gehrd(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t lo, fwi_integer_t hi):
    """
    gehrd(min_lwork, max_lwork, prefix, n, lo, hi) -> (min_lwork, max_lwork, prefix, n, lo, hi)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    lo : fwi_integer, intent inout
    hi : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    lo : fwi_integer, intent inout
    hi : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gehrd_c(&min_lwork, &max_lwork, fw_prefix, &n, &lo, &hi, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gehrd' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, n, lo, hi,)


cpdef api object gesdd(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t compute_uv):
    """
    gesdd(min_lwork, max_lwork, prefix, m, n, compute_uv) -> (min_lwork, max_lwork, prefix, m, n, compute_uv)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    compute_uv : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    compute_uv : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gesdd_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &compute_uv, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gesdd' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, m, n, compute_uv,)


cpdef api object gelss(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n, fwi_integer_t nrhs):
    """
    gelss(min_lwork, max_lwork, prefix, m, n, nrhs) -> (min_lwork, max_lwork, prefix, m, n, nrhs)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    nrhs : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout
    nrhs : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gelss_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &nrhs, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gelss' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, m, n, nrhs,)


cpdef api object getri(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n):
    """
    getri(min_lwork, max_lwork, prefix, n) -> (min_lwork, max_lwork, prefix, n)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    getri_c(&min_lwork, &max_lwork, fw_prefix, &n, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'getri' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, n,)


cpdef api object geev(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t compute_vl, fwi_integer_t compute_vr):
    """
    geev(min_lwork, max_lwork, prefix, n, compute_vl, compute_vr) -> (min_lwork, max_lwork, prefix, n, compute_vl, compute_vr)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    compute_vl : fwi_integer, intent inout
    compute_vr : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    compute_vl : fwi_integer, intent inout
    compute_vr : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    geev_c(&min_lwork, &max_lwork, fw_prefix, &n, &compute_vl, &compute_vr, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'geev' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, n, compute_vl, compute_vr,)


cpdef api object heev(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t lower):
    """
    heev(min_lwork, max_lwork, prefix, n, lower) -> (min_lwork, max_lwork, prefix, n, lower)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    lower : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    lower : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    heev_c(&min_lwork, &max_lwork, fw_prefix, &n, &lower, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'heev' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, n, lower,)


cpdef api object syev(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t lower):
    """
    syev(min_lwork, max_lwork, prefix, n, lower) -> (min_lwork, max_lwork, prefix, n, lower)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    lower : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    lower : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    syev_c(&min_lwork, &max_lwork, fw_prefix, &n, &lower, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'syev' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, n, lower,)


cpdef api object gees(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t n, fwi_integer_t compute_v):
    """
    gees(min_lwork, max_lwork, prefix, n, compute_v) -> (min_lwork, max_lwork, prefix, n, compute_v)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    compute_v : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    n : fwi_integer, intent inout
    compute_v : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gees_c(&min_lwork, &max_lwork, fw_prefix, &n, &compute_v, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gees' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, n, compute_v,)


cpdef api object geqrf(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n):
    """
    geqrf(min_lwork, max_lwork, prefix, m, n) -> (min_lwork, max_lwork, prefix, m, n)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    geqrf_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'geqrf' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, m, n,)


cpdef api object gqr(fwi_integer_t min_lwork, fwi_integer_t max_lwork, object prefix, fwi_integer_t m, fwi_integer_t n):
    """
    gqr(min_lwork, max_lwork, prefix, m, n) -> (min_lwork, max_lwork, prefix, m, n)

    Parameters
    ----------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout

    Returns
    -------
    min_lwork : fwi_integer, intent inout
    max_lwork : fwi_integer, intent inout
    prefix : object_, intent inout
    m : fwi_integer, intent inout
    n : fwi_integer, intent inout

    """
    cdef char *fw_prefix = [0, 0]
    cdef fwi_integer_t fw_iserr__
    cdef fw_character_t fw_errstr__[fw_errstr_len]
    fw_prefix[0] = fw_aschar(prefix)
    if fw_prefix[0] == 0:
        raise ValueError("len(prefix) != 1")
    gqr_c(&min_lwork, &max_lwork, fw_prefix, &m, &n, &fw_iserr__, fw_errstr__)
    if fw_iserr__ != FW_NO_ERR__:
        raise RuntimeError("an error was encountered when calling the 'gqr' wrapper.")
    return (min_lwork, max_lwork, fw_prefix, m, n,)



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
# Fwrap: wraps src/calc_lwork.f
# Fwrap:     sha1 9403c229ea6a86018979d6df550170cd2e1cef89
# Fwrap: f77binding True
# Fwrap: detect-templates False
# Fwrap: emulate-f2py True
# Fwrap: auxiliary calc_lwork.pxd
# Fwrap: auxiliary calc_lwork_fc.f
# Fwrap: auxiliary calc_lwork_fc.h
# Fwrap: auxiliary calc_lwork_fc.pxd

