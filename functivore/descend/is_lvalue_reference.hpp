// Copyright 2025 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_FUNCTIVORE_IS_LVALUE_REFERENCE_H
#define CONCEPTRODON_FUNCTIVORE_IS_LVALUE_REFERENCE_H

#include "functivore/analyzer.hpp"




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_LVALUE_REFERENCE_FLAG
#error "CONCEPTRODON_NUCLEOLUS_LVALUE_REFERENCE_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/lvalue_reference.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
namespace Conceptrodon {
namespace Functivore {

template <typename F>
struct IsLvalueReference
{
    static constexpr bool value
    { static_cast<bool>(CONCEPTRODON_NUCLEOLUS_LVALUE_REFERENCE_FLAG & Analyzer<F>::value) };
};

template <typename F>
constexpr bool IsLvalueReference_v
{ static_cast<bool>(CONCEPTRODON_NUCLEOLUS_LVALUE_REFERENCE_FLAG & Analyzer<F>::value) };

}}
/******************************************************************************************************/




/******************************************************************************************************/
#include "functivore/microbiota/nucleolus/define_flags/lvalue_reference.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#endif
/******************************************************************************************************/
