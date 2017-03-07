#ifndef __EXERCISE2_0_HPP_
#define __EXERCISE2_0_HPP_

#include <type_traits>

template <typename T>
struct add_const_ref
{
    using type = typename std::add_lvalue_reference<typename std::add_const<T>::type>::type;
};

template <typename T>
struct add_const_ref<T&>
{
    using type = typename std::add_lvalue_reference<T>::type;
};

template <typename T>
struct add_const_ref<T&&>
{
    using type = typename std::add_rvalue_reference<T>::type;
};

#endif
