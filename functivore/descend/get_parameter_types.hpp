// Copyright 2025 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_FUNCTIVORE_GET_PARAMETER_TYPES_H
#define CONCEPTRODON_FUNCTIVORE_GET_PARAMETER_TYPES_H

#include "functivore/analyzer.hpp"

/******************************************************************************************************/
namespace Conceptrodon {
namespace Functivore {

template<typename Fn>
struct TypicalGetParameterTypes
{ using type = Analyzer<Fn>::parameter_types;};

template<typename...Args>
using GetParameterTypes = TypicalGetParameterTypes<Args...>::type;

}}
/******************************************************************************************************/

#endif
