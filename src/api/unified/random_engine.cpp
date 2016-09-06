/*******************************************************
 * Copyright(c) 2015, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/array.h>
#include <af/random_engine.h>
#include "symbol_manager.hpp"

af_err af_get_default_random_engine(af_random_engine *r)
{
    return CALL(r);
}

af_err af_create_random_engine(af_random_engine *engineHandle, af_random_engine_type rtype, unsigned long long seed)
{
    return CALL(engineHandle, rtype, seed);
}

af_err af_retain_random_engine(af_random_engine *outHandle, const af_random_engine engineHandle)
{
    return CALL(outHandle, engineHandle);
}

af_err af_random_engine_get_type(af_random_engine_type *rtype, const af_random_engine engine)
{
    return CALL(rtype, engine);
}

af_err af_random_engine_set_type(af_random_engine *engine, const af_random_engine_type rtype)
{
    return CALL(engine, rtype);
}

af_err af_set_default_random_engine(const af_random_engine_type rtype)
{
    return CALL(rtype);
}

af_err af_random_uniform(af_array *arr, const unsigned ndims, const dim_t * const dims, const af_dtype type, af_random_engine engine)
{
    return CALL(arr, ndims, dims, type, engine);
}

af_err af_random_normal(af_array *arr, const unsigned ndims, const dim_t * const dims, const af_dtype type, af_random_engine engine)
{
    return CALL(arr, ndims, dims, type, engine);
}

af_err af_release_random_engine(af_random_engine engineHandle)
{
    return CALL(engineHandle);
}

af_err af_random_engine_set_seed(af_random_engine *engine, const uintl seed)
{
    return CALL(engine, seed);
}

af_err af_random_engine_get_seed(uintl * const seed, af_random_engine engine)
{
    return CALL(seed, engine);
}

af_err af_randu(af_array *out, const unsigned ndims, const dim_t * const dims, const af_dtype type)
{
    return CALL(out, ndims, dims, type);
}

af_err af_randn(af_array *out, const unsigned ndims, const dim_t * const dims, const af_dtype type)
{
    return CALL(out, ndims, dims, type);
}

af_err af_set_seed(const uintl seed)
{
    return CALL(seed);
}

af_err af_get_seed(uintl *seed)
{
    return CALL(seed);
}