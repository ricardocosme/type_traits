#pragma once

#include "add_rvalue_reference.hpp"

namespace std {

template <typename T>
constexpr add_rvalue_reference_t<T> declval() noexcept;

}
