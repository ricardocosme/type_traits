#pragma once

#include "integral_constant.hpp"

namespace std {

template<typename T>
struct is_rvalue_reference : false_type {};

template<typename T>
struct is_rvalue_reference<T&&> : true_type {};

}
