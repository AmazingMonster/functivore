// Copyright 2024 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_TESTS_UNIT_FUNCTIVORE_GET_PARAMETER_TYPES_H
#define CONCEPTRODON_TESTS_UNIT_FUNCTIVORE_GET_PARAMETER_TYPES_H

#include "functivore/descend/get_parameter_types.hpp"
#include <concepts>

namespace Conceptrodon {
namespace Functivore {
namespace UnitTests {
namespace TestGetParameterTypes {




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
static_assert(std::same_as<GetParameterTypes<decltype(fun_0)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(fun_1)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(fun_2)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(fun_3)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunP_0)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunP_1)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunP_2)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunP_3)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunAddr_0)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunAddr_1)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunAddr_2)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(FunAddr_3)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::fun_0)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::fun_1)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::fun_2)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::fun_3)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::gun_0)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::gun_1)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::gun_2)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::gun_3)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(&Tester::gun_4)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<FO_0>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<FO_1>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<FO_2>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<FO_3>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<FO_4>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<FO_5>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<FO_6>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<FO_7>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<FO_8>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(Lambda_0)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(Lambda_1)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(Lambda_2)>::Road<Capsule>, Capsule<int, double>>);
static_assert(std::same_as<GetParameterTypes<decltype(Lambda_3)>::Road<Capsule>, Capsule<int, double&>>);
static_assert(std::same_as<GetParameterTypes<decltype(Lambda_4)>::Road<Capsule>, Capsule<int, double&>>);
/******************************************************************************************************/




}}}}

#endif