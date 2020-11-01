#pragma once

#include "declval.hpp"
#include "integral_constant.hpp"

namespace std {

//until c++14
struct do_is_destructible {
    template<typename T, typename = decltype(declval<T&>().~T())>
    static true_type test(int);

    template<typename>
    static false_type test(...);
};

template<typename T>
struct is_destructible_impl : do_is_destructible {
    using type = decltype(test<T>(0));
};

template<typename T>
using is_destructible = typename is_destructible_impl<T>::type;

}
