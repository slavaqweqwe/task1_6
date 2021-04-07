// my_sin.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#pragma once

#include "vector"
namespace testspace {

    template <int n>
    struct Fibonacci {
        static const int ret = Fibonacci<n - 1>::ret + Fibonacci<n - 2>::ret ;
    };
    template <>
    struct Fibonacci<0> {
        static const int ret = 0 ;
    };
    template <>
    struct Fibonacci<1> {
        static const int ret = 1 ;
    };
}