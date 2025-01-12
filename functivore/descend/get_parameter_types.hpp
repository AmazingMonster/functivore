// Copyright 2025 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_FUNCTIVORE_GET_PARAMETER_TYPES_H
#define CONCEPTRODON_FUNCTIVORE_GET_PARAMETER_TYPES_H

#include "functivore/analyzer.hpp"

/******************************************************************************************************/
namespace Conceptrodon {
namespace Functivore {

template<typename Fn>
struct GetParameterTypes
{ 
    template<template<typename...> class, typename>
    struct Detail {};

    template
    <
        template<typename...> class Operation,
        template<typename...> class Vessel,
        typename...Args
    >
    struct Detail<Operation, Vessel<Args...>>
    {
        using type = Operation<Args...>; ;
    };

    template<template<typename...> class...Args>
    using Road = Detail<Args..., typename Analyzer<Fn>::parameter_types>::type;
};

}}
/******************************************************************************************************/

#endif
