#pragma once

#include "integral_constant.hpp"
#include "is_destructible.hpp"

namespace std {

//Only for avr-gcc
template<typename T>
struct is_trivially_destructible
    : integral_constant<bool, is_destructible<T>::value
                        && __has_trivial_destructor(T)>
{};

}
