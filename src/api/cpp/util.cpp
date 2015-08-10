/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/array.h>
#include <af/util.h>
#include "error.hpp"
#include <cstdio>

using namespace std;

namespace af
{
    void print(const char *exp, const array &arr)
    {
        AF_THROW(af_print_array_c(exp, arr.get()));
        return;
    }

    void print(const char *exp, const array &arr, const int precision)
    {
        printf("%s ", exp);
        AF_THROW(af_print_array_p(exp, arr.get(), precision));
        return;
    }

    void saveArray(const char *key, const array &arr, const char *filename, const bool append)
    {
        AF_THROW(af_save_array(key, arr.get(), filename, append));
        return;
    }

    array readArray(const char *filename, const unsigned index)
    {
        af_array out = 0;
        AF_THROW(af_read_array_index(&out, filename, index));
        return array(out);
    }

    array readArray(const char *filename, const char *key)
    {
        af_array out = 0;
        AF_THROW(af_read_array_key(&out, filename, key));
        return array(out);
    }

    int readArrayCheck(const char *filename, const char *key)
    {
        int out = -1;
        AF_THROW(af_read_array_key_check(&out, filename, key));
        return out;
    }
}
