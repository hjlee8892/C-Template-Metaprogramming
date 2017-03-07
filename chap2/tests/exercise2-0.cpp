#include "exercise2-0.hpp"
#include <gtest/gtest.h>

#include <cassert>

namespace
{

template <typename T0, typename T1>
struct StaticAssertEQ {};

template <typename T>
struct StaticAssertEQ<T, T>
{
    static constexpr auto value = true;
};

    

}


TEST(TestExercise2_0, testAddConstRef)
{
    using std::is_same;
    static_assert(StaticAssertEQ<add_const_ref<int>::type, const int&>::value, "Type doesn't match");
    static_assert(StaticAssertEQ<add_const_ref<int &>::type, int&>::value, "Type doesn't match");
    static_assert(StaticAssertEQ<add_const_ref<int &&>::type, int&&>::value, "Type doesn't match");
    static_assert(StaticAssertEQ<add_const_ref<const int &>::type, const int&>::value, "Type doesn't match");

    ASSERT_TRUE((is_same                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  <add_const_ref<int>::type, add_const_ref<const int &>::type>::value));
}
