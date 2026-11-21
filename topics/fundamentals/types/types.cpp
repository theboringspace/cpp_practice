#include "types.hpp"

#include <print>
#include <vector>

int main()
{
    // ? Fundamental type sizes and limits
    using namespace TypeSize;
    using namespace TypeLimits;

    std::println("{:<10} {:>5}  {:>26}  {:>26}", "Type", "Bytes", "Min", "Max");
    std::println("{:-<72}", "");
    // :d prints char as its integer value instead of a character.
    std::println("{:<10} {:>5}  {:>26d}  {:>26d}", "char",      CHAR_SIZE,      CHAR_MIN_VAL,      CHAR_MAX_VAL);
    std::println("{:<10} {:>5}  {:>26}  {:>26}",   "short",     SHORT_SIZE,     SHORT_MIN_VAL,     SHORT_MAX_VAL);
    std::println("{:<10} {:>5}  {:>26}  {:>26}",   "int",       INT_SIZE,       INT_MIN_VAL,       INT_MAX_VAL);
    std::println("{:<10} {:>5}  {:>26}  {:>26}",   "long",      LONG_SIZE,      LONG_MIN_VAL,      LONG_MAX_VAL);
    std::println("{:<10} {:>5}  {:>26}  {:>26}",   "long long", LONG_LONG_SIZE, LONG_LONG_MIN_VAL, LONG_LONG_MAX_VAL);
    std::println("{:<10} {:>5}  {:>26}  {:>26}",   "float",     FLOAT_SIZE,     FLOAT_MIN_VAL,     FLOAT_MAX_VAL);
    std::println("{:<10} {:>5}  {:>26}  {:>26}",   "double",    DOUBLE_SIZE,    DOUBLE_MIN_VAL,    DOUBLE_MAX_VAL);
    std::println("{:<10} {:>5}  {:>26}  {:>26}\n\n", "bool",    BOOL_SIZE,      BOOL_MIN_VAL,      BOOL_MAX_VAL);

    // ? Brace initialization vs. = initialization
    int a = 5;     // Copy-initialization
    int b(5);      // Direct-initialization
    int c{5};      // Direct-list-initialization
    int d = {5};   // Copy-list-initialization

    std::println("a = {}, b = {}, c = {}, d = {}\n\n", a, b, c, d);


    // ? Narrowing conversions
    int e = 3.7;  // Compiles, truncates to 3.
    // int b{ 3.7 }; // Error: narrowing conversion from double to int.

    char f = 300; // Compiles, implementation-defined value
    // char d{300};  // Error

    std::println("e = {}, f = {}\n\n", e, f);

    // ? Default initialization
    int x;      // uninitialized: garbage value if it's a local variable
    int y{};    // value-initialized to 0
    // int z();    // Not a variable. This declares a function returning int.

    std::println("x = {}, y = {}", x, y);

    // ? Braces prefer std::initializer_list constructors
    std::vector<int> v1(10, 2);  // 10 elements, each 2
    std::vector<int> v2{10, 2};  // 2 elements: 10 and 2

    std::vector<int> v3(10);     // 10 zeros
    std::vector<int> v4{10};     // 1 element: 10

    // ? = can't be used to call 'explicit' constructors
    struct Meters { explicit Meters(double) {} };

    Meters m1(5.0);    // OK
    Meters m2{5.0};    // OK
    // Meters m3 = 5.0;   // ERROR: copy-init won't use an explicit constructor
    // Meters m4 = {5.0}; // ERROR: same rule

    // ? auto
    auto r = 5;     // int
    auto p{5};      // int
    auto m = {5};   // std::initializer_list<int>


    return 0;
}
