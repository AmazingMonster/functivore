// Copyright 2024 Feng Mofan
// SPDX-License-Identifier: Apache-2.0

#ifndef CONCEPTRODON_TESTS_UNIT_FUNCTIVORE_IS_RVALUE_REFERENCE_H
#define CONCEPTRODON_TESTS_UNIT_FUNCTIVORE_IS_RVALUE_REFERENCE_H

#include "functivore/descend/is_rvalue_reference.hpp"

namespace Conceptrodon {
namespace Functivore {
namespace UnitTests {
namespace TestIsRvalueReference {




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
static_assert(! IsRvalueReference<decltype(fun_0)>::value);
static_assert(! IsRvalueReference<decltype(fun_1)>::value);
static_assert(! IsRvalueReference<decltype(fun_2)>::value);
static_assert(! IsRvalueReference<decltype(fun_3)>::value);
static_assert(! IsRvalueReference<decltype(FunP_0)>::value);
static_assert(! IsRvalueReference<decltype(FunP_1)>::value);
static_assert(! IsRvalueReference<decltype(FunP_2)>::value);
static_assert(! IsRvalueReference<decltype(FunP_3)>::value);
static_assert(! IsRvalueReference<decltype(FunAddr_0)>::value);
static_assert(! IsRvalueReference<decltype(FunAddr_1)>::value);
static_assert(! IsRvalueReference<decltype(FunAddr_2)>::value);
static_assert(! IsRvalueReference<decltype(FunAddr_3)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::fun_0)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::fun_1)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::fun_2)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::fun_3)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::gun_0)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::gun_1)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::gun_2)>::value);
static_assert(! IsRvalueReference<decltype(&Tester::gun_3)>::value);
static_assert(IsRvalueReference<decltype(&Tester::gun_4)>::value);
static_assert(! IsRvalueReference<FO_0>::value);
static_assert(! IsRvalueReference<FO_1>::value);
static_assert(! IsRvalueReference<FO_2>::value);
static_assert(! IsRvalueReference<FO_3>::value);
static_assert(! IsRvalueReference<FO_4>::value);
static_assert(! IsRvalueReference<FO_5>::value);
static_assert(! IsRvalueReference<FO_6>::value);
static_assert(! IsRvalueReference<FO_7>::value);
static_assert(IsRvalueReference<FO_8>::value);
static_assert(! IsRvalueReference<decltype(Lambda_0)>::value);
static_assert(! IsRvalueReference<decltype(Lambda_1)>::value);
static_assert(! IsRvalueReference<decltype(Lambda_2)>::value);
static_assert(! IsRvalueReference<decltype(Lambda_3)>::value);
static_assert(! IsRvalueReference<decltype(Lambda_4)>::value);
/******************************************************************************************************/




/******************************************************************************************************/
static_assert(! IsRvalueReference_v<decltype(fun_0)>);
static_assert(! IsRvalueReference_v<decltype(fun_1)>);
static_assert(! IsRvalueReference_v<decltype(fun_2)>);
static_assert(! IsRvalueReference_v<decltype(fun_3)>);
static_assert(! IsRvalueReference_v<decltype(FunP_0)>);
static_assert(! IsRvalueReference_v<decltype(FunP_1)>);
static_assert(! IsRvalueReference_v<decltype(FunP_2)>);
static_assert(! IsRvalueReference_v<decltype(FunP_3)>);
static_assert(! IsRvalueReference_v<decltype(FunAddr_0)>);
static_assert(! IsRvalueReference_v<decltype(FunAddr_1)>);
static_assert(! IsRvalueReference_v<decltype(FunAddr_2)>);
static_assert(! IsRvalueReference_v<decltype(FunAddr_3)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::fun_0)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::fun_1)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::fun_2)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::fun_3)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::gun_0)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::gun_1)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::gun_2)>);
static_assert(! IsRvalueReference_v<decltype(&Tester::gun_3)>);
static_assert(IsRvalueReference_v<decltype(&Tester::gun_4)>);
static_assert(! IsRvalueReference_v<FO_0>);
static_assert(! IsRvalueReference_v<FO_1>);
static_assert(! IsRvalueReference_v<FO_2>);
static_assert(! IsRvalueReference_v<FO_3>);
static_assert(! IsRvalueReference_v<FO_4>);
static_assert(! IsRvalueReference_v<FO_5>);
static_assert(! IsRvalueReference_v<FO_6>);
static_assert(! IsRvalueReference_v<FO_7>);
static_assert(IsRvalueReference_v<FO_8>);
static_assert(! IsRvalueReference_v<decltype(Lambda_0)>);
static_assert(! IsRvalueReference_v<decltype(Lambda_1)>);
static_assert(! IsRvalueReference_v<decltype(Lambda_2)>);
static_assert(! IsRvalueReference_v<decltype(Lambda_3)>);
static_assert(! IsRvalueReference_v<decltype(Lambda_4)>);
/******************************************************************************************************/




}}}}

#endif