/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <Array.hpp>

namespace opencl {
namespace cpu {
template<typename T>
void qr(Array<T> &q, Array<T> &r, Array<T> &t, const Array<T> &in);

template<typename T>
Array<T> qr_inplace(Array<T> &in);
}  // namespace cpu
}  // namespace opencl
