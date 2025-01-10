// Copyright 2025 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_FUNCTIVORE_ANALYZER_H
#define CONCEPTRODON_FUNCTIVORE_ANALYZER_H

#include "functivore/microbiota/functilis/analyzer_prototype.hpp"




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_FLAG_TYPE
#error "CONCEPTRODON_NUCLEOLUS_FLAG_TYPE has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/flag_type.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG
#error "CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/function.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_FUNCTION_POINTER_FLAG
#error "CONCEPTRODON_NUCLEOLUS_FUNCTION_POINTER_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/function_pointer.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_POINTER_TO_MEMBER_FUNCTION_FLAG
#error "CONCEPTRODON_NUCLEOLUS_POINTER_TO_MEMBER_FUNCTION_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/pointer_to_member_function.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_FUNCTION_OBJECT_FLAG
#error "CONCEPTRODON_NUCLEOLUS_FUNCTION_OBJECT_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/function_object.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
namespace Conceptrodon {
namespace Functivore {

template<typename Type>
struct Analyzer {};

template<typename Fn>
struct Analyzer<Fn*>
: public Analyzer<Fn>
{
    static constexpr CONCEPTRODON_NUCLEOLUS_FLAG_TYPE value
    {
        CONCEPTRODON_NUCLEOLUS_FUNCTION_POINTER_FLAG |
        (
            CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG ^
            Functilis::FunctionAnalyzer<Fn>::value
        )
    };
};

template<typename MemFn, typename Structure>
struct Analyzer<MemFn Structure::*>
: public Functilis::FunctionAnalyzer<MemFn>
{
    static constexpr CONCEPTRODON_NUCLEOLUS_FLAG_TYPE value
    {
        CONCEPTRODON_NUCLEOLUS_POINTER_TO_MEMBER_FUNCTION_FLAG |
        (
            CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG ^
            Functilis::FunctionAnalyzer<MemFn>::value
        )
    };

    using class_type = Structure;
};

template<typename FO>
requires requires {&FO::operator();}
struct Analyzer<FO>
: public Functilis::FunctionAnalyzer<decltype(FO::operator())>
{
    static constexpr CONCEPTRODON_NUCLEOLUS_FLAG_TYPE value
    {
        CONCEPTRODON_NUCLEOLUS_FUNCTION_OBJECT_FLAG |
        (
            CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG ^
            Functilis::FunctionAnalyzer<decltype(FO::operator())>::value
        )
    };

    using class_type = FO;
};

}}
/******************************************************************************************************/




/******************************************************************************************************/
#include "functivore/microbiota/nucleolus/define_flags/flag_type.hpp"
#include "functivore/microbiota/nucleolus/define_flags/function.hpp"
#include "functivore/microbiota/nucleolus/define_flags/function_pointer.hpp"
#include "functivore/microbiota/nucleolus/define_flags/pointer_to_member_function.hpp"
#include "functivore/microbiota/nucleolus/define_flags/function_object.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#endif
/******************************************************************************************************/
