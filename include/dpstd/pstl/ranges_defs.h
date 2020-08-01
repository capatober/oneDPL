// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
// This file incorporates work covered by the following copyright and permission
// notice:
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
//
//===----------------------------------------------------------------------===//

#ifndef _PSTL_RANGES_DEFS_H
#define _PSTL_RANGES_DEFS_H

#include "ranges/nanorange.hpp"

namespace dpstd
{
namespace experimental
{
namespace ranges
{

//custom views
using oneapi::dpl::__ranges::all_view;
using oneapi::dpl::__ranges::guard_view;
using oneapi::dpl::__ranges::zip_view;

//views
using nano::ranges::drop_view;
using nano::ranges::iota_view;
using nano::ranges::reverse_view;
using nano::ranges::take_view;
using nano::ranges::transform_view;

//adaptors
namespace views
{
using oneapi::dpl::__ranges::views::all;

using nano::views::drop;
using nano::views::iota;
using nano::views::reverse;
using nano::views::take;
using nano::views::transform;
} // namespace views

} // namespace ranges
} // namespace experimental
} // namespace dpstd

#endif /* _PSTL_RANGES_DEFS_H */