// Copyright 2025 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_FUNCTIVORE_IS_CONST_H
#define CONCEPTRODON_FUNCTIVORE_IS_CONST_H

/******************************************************************************************************/
namespace Conceptrodon {
namespace Functivore {

template <typename Ret>
struct ApplyReturn
{
    template<typename...Args>
    using Mold = Ret(Args...);
};

}}
/******************************************************************************************************/

#endif
