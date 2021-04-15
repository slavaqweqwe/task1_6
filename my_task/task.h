
#pragma once

namespace testspace {

    template <int n>
    struct Fibonacci {
        static const int result = Fibonacci<n - 1>::result + Fibonacci<n - 2>::result;
    };
    template <>
    struct Fibonacci<0> {
        static const int result = 0 ;
    };
    template <>
    struct Fibonacci<1> {
        static const int result = 1 ;
    };
}