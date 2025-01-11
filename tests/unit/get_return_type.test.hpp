// Copyright 2024 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_TESTS_UNIT_FUNCTIVORE_GET_RETURN_TYPE_H
#define CONCEPTRODON_TESTS_UNIT_FUNCTIVORE_GET_RETURN_TYPE_H

#include "functivore/descend/get_return_type.hpp"
#include <concepts>

namespace Conceptrodon {
namespace Functivore {
namespace UnitTests {
namespace TestGetReturnType {




/******************************************************************************************************/
/**** functions ****/
inline int fun_0(int, double){ return 0; }
inline int fun_1(int, double...){ return 0; }
inline int fun_2(int const, double...){ return 0; }
inline int fun_3(int const, double&...){ return 0; }

/**** function pointers ****/
inline auto FunP_0 { fun_0 };
inline auto FunP_1 { fun_1 };
inline auto FunP_2 { fun_2 };
inline auto FunP_3 { fun_3 };

inline auto FunAddr_0 { &fun_0 };
inline auto FunAddr_1 { &fun_1 };
inline auto FunAddr_2 { &fun_2 };
inline auto FunAddr_3 { &fun_3 };

/**** pointer to member functions ****/
struct Tester
{
    inline int fun_0(int, double){ return 0; }
    inline int fun_1(int, double...){ return 0; }
    inline int fun_2(int const, double...){ return 0; }
    inline int fun_3(int const, double&...){ return 0; }

    inline int gun_0(int const, double&...) const { return 0; }
    inline int gun_1(int const, double&...) const volatile { return 0; }
    inline int gun_2(int const, double&...) const volatile noexcept { return 0; }
    inline int gun_3(int const, double&...) const volatile & noexcept { return 0; }
    inline int gun_4(int const, double&...) const volatile && noexcept { return 0; }
};

/**** function objects ****/
struct FO_0
{
    int operator()(int, double){ return 0; }
};

struct FO_1
{
    int operator()(int, double...){ return 0; }
};

struct FO_2
{
    int operator()(int const, double...){ return 0; }
};

struct FO_3
{
    int operator()(int const, double&...){ return 0; }
};

struct FO_4
{
    int operator()(int const, double&...) const { return 0; }
};

struct FO_5
{
    int operator()(int const, double&...) const volatile { return 0; }
};

struct FO_6
{
    int operator()(int const, double&...) const volatile noexcept { return 0; }
};

struct FO_7
{
    int operator()(int const, double&...) const volatile & noexcept { return 0; }
};

struct FO_8
{
    int operator()(int const, double&...) const volatile && noexcept { return 0; }
};

/**** lambda expressions ****/
inline auto Lambda_0
{
    [](int, double)
    { return 0; }
};

inline auto Lambda_1
{
    [](int, double...)
    { return 0; }
};

inline auto Lambda_2
{
    [](int const, double...)
    { return 0; }
};

inline auto Lambda_3
{
    [](int const, double&...)
    { return 0; }
};

inline auto Lambda_4
{
    [](int const, double&...) noexcept
    { return 0; }
};
/******************************************************************************************************/




/******************************************************************************************************/
using SupposedType = int;

static_assert(std::same_as<GetReturnType<decltype(fun_0)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(fun_1)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(fun_2)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(fun_3)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunP_0)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunP_1)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunP_2)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunP_3)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunAddr_0)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunAddr_1)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunAddr_2)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(FunAddr_3)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::fun_0)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::fun_1)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::fun_2)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::fun_3)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::gun_0)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::gun_1)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::gun_2)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::gun_3)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(&Tester::gun_4)>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_0>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_1>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_2>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_3>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_4>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_5>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_6>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_7>, SupposedType>);
static_assert(std::same_as<GetReturnType<FO_8>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(Lambda_0)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(Lambda_1)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(Lambda_2)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(Lambda_3)>, SupposedType>);
static_assert(std::same_as<GetReturnType<decltype(Lambda_4)>, SupposedType>);
/******************************************************************************************************/




}}}}

#endif