#pragma once

#include "integral_constant.hpp"

namespace std {

template<typename T>
struct is_reference : false_type {};

//TODO use or and is_{lvalue,rvalue}_reference
template<typename T>
struct is_reference<T&> : true_type {};

template<typename T>
struct is_reference<T&&> : true_type {};

}
