// Copyright 2025 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_H
#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_H

#include <cstdint>

/*******************************************************************************************************

VOL = volatile;
C = const;
N = noexcept;
F = function;
VAR = variadic;
FP = function pointer;
FO = function object;
PTMF = pointer to member function;


    |  &&  |   &  |  VOL |   C  |   N  |  VAR |   F  |  FP  | PTMF |  FO  |
----+------+------+------+------+------+------+------+------+------+------+----
    |   0  |   0  |   0  |   0  |   0  |   0  |   0  |   0  |   0  |   0  |

*******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_FLAG_TYPE
#error "CONCEPTRODON_NUCLEOLUS_FLAG_TYPE has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/flag_type.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_RVALUE_REFERENCE_FLAG
#error "CONCEPTRODON_NUCLEOLUS_RVALUE_REFERENCE_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/rvalue_reference.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_LVALUE_REFERENCE_FLAG
#error "CONCEPTRODON_NUCLEOLUS_LVALUE_REFERENCE_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/lvalue_reference.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_VOLATILE_FLAG
#error "CONCEPTRODON_NUCLEOLUS_VOLATILE_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/volatile.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_CONST_FLAG
#error "CONCEPTRODON_NUCLEOLUS_CONST_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/const.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_NOEXCEPT_FLAG
#error "CONCEPTRODON_NUCLEOLUS_NOEXCEPT_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/noexcept.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_VARIADIC_FLAG
#error "CONCEPTRODON_NUCLEOLUS_VARIADIC_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/variadic.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG
#error "CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG has already been defined"
#endif

#include "functivore/microbiota/nucleolus/define_flags/function.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VESSEL_IDENTIFIER
#error "CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VESSEL_IDENTIFIER has already been defined"
#endif

#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VESSEL_IDENTIFIER   \
    Capsule
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VALUE_IDENTIFIER
#error "CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VALUE_IDENTIFIER has already been defined"
#endif

#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VALUE_IDENTIFIER   \
    value
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_RESULT_TYPE_IDENTIFIER
#error "CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_RESULT_TYPE_IDENTIFIER has already been defined"
#endif

#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_RESULT_TYPE_IDENTIFIER   \
    result_type
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_TYPES_IDENTIFIER
#error "CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_TYPES_IDENTIFIER has already been defined"
#endif

#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_TYPES_IDENTIFIER   \
    parameter_types
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_IDENTIFIER
#error "CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_IDENTIFIER has already been defined"
#endif

#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_IDENTIFIER \
    FunctionLike
/******************************************************************************************************/




/******************************************************************************************************/
#ifdef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_FUNCTION_NAME
#error "CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_FUNCTION_NAME has already been defined"
#endif

#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_FUNCTION_NAME \
    FunctionAnalyzer
/******************************************************************************************************/




/******************************************************************************************************/
namespace Conceptrodon {

template<typename...>
struct CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VESSEL_IDENTIFIER;

}
/******************************************************************************************************/




/******************************************************************************************************/
namespace Conceptrodon {
namespace Functilis {

template<typename CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_IDENTIFIER >
struct CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_FUNCTION_NAME
{
    static constexpr CONCEPTRODON_NUCLEOLUS_FLAG_TYPE   \
    CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VALUE_IDENTIFIER = 0;

    using CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_RESULT_TYPE_IDENTIFIER \
    = CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_IDENTIFIER ;
};

#define CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_DEFAULT_FLAG \
    CONCEPTRODON_NUCLEOLUS_FUNCTION_FLAG

#include "functivore/microbiota/functilis/analyzer_prototype/analyzer_prototype.hpp"

#undef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_DEFAULT_FLAG

}}
/******************************************************************************************************/




/******************************************************************************************************/
#include "functivore/microbiota/nucleolus/undef_flags/flag_type.hpp"
#include "functivore/microbiota/nucleolus/undef_flags/rvalue_reference.hpp"
#include "functivore/microbiota/nucleolus/undef_flags/lvalue_reference.hpp"
#include "functivore/microbiota/nucleolus/undef_flags/volatile.hpp"
#include "functivore/microbiota/nucleolus/undef_flags/const.hpp"
#include "functivore/microbiota/nucleolus/undef_flags/noexcept.hpp"
#include "functivore/microbiota/nucleolus/undef_flags/variadic.hpp"
#include "functivore/microbiota/nucleolus/undef_flags/function.hpp"
/******************************************************************************************************/




/******************************************************************************************************/
#undef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VESSEL_IDENTIFIER
#undef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_VALUE_IDENTIFIER
#undef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_RESULT_TYPE_IDENTIFIER
#undef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_TYPES_IDENTIFIER
#undef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_PARAMETER_IDENTIFIER
#undef CONCEPTRODON_FUNCTILIS_ANALYZER_PROTOTYPE_FUNCTION_NAME
/******************************************************************************************************/




/******************************************************************************************************/
#endif
/******************************************************************************************************/
