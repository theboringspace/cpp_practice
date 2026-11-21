#pragma once

#include <limits>

namespace TypeSize
{
constexpr auto CHAR_SIZE         { sizeof(char) };
constexpr auto SHORT_SIZE        { sizeof(short) };
constexpr auto INT_SIZE          { sizeof(int) };
constexpr auto LONG_SIZE         { sizeof(long) };
constexpr auto LONG_LONG_SIZE    { sizeof(long long) };
constexpr auto FLOAT_SIZE        { sizeof(float) };
constexpr auto DOUBLE_SIZE       { sizeof(double) };
constexpr auto BOOL_SIZE         { sizeof(bool) };
}

namespace TypeLimits
{
constexpr auto CHAR_MIN_VAL      { std::numeric_limits<char>::min() };
constexpr auto CHAR_MAX_VAL      { std::numeric_limits<char>::max() };
constexpr auto SHORT_MIN_VAL     { std::numeric_limits<short>::min() };
constexpr auto SHORT_MAX_VAL     { std::numeric_limits<short>::max() };
constexpr auto INT_MIN_VAL       { std::numeric_limits<int>::min() };
constexpr auto INT_MAX_VAL       { std::numeric_limits<int>::max() };
constexpr auto LONG_MIN_VAL      { std::numeric_limits<long>::min() };
constexpr auto LONG_MAX_VAL      { std::numeric_limits<long>::max() };
constexpr auto LONG_LONG_MIN_VAL { std::numeric_limits<long long>::min() };
constexpr auto LONG_LONG_MAX_VAL { std::numeric_limits<long long>::max() };
constexpr auto FLOAT_MIN_VAL     { std::numeric_limits<float>::lowest() };
constexpr auto FLOAT_MAX_VAL     { std::numeric_limits<float>::max() };
constexpr auto DOUBLE_MIN_VAL    { std::numeric_limits<double>::lowest() };
constexpr auto DOUBLE_MAX_VAL    { std::numeric_limits<double>::max() };
constexpr auto BOOL_MIN_VAL      { std::numeric_limits<bool>::min() };
constexpr auto BOOL_MAX_VAL      { std::numeric_limits<bool>::max() };
}
