//
// Created by Housz on 2017/11/17.
//
#pragma once
#ifndef HLIB_VECTOR_UNSORT_H
#define HLIB_VECTOR_UNSORT_H

#include "vector.h"
#include "stdlib.h"//rand()

//swap函数
template<class T>
void swap(T &a, T &b)
{
    T c(a);
    a = b;
    b = c;
}

//区间置乱
template <class T>
void Vector<T>::unsort(Rank lo, Rank hi)
{
    T* V = _elem+lo;
    for (int i = hi-lo; i > 0; i--)
    {
        swap(V[i-1], V[rand()%i]);
    }
}

//整体置乱
template <class T>
void Vector<T>::unsort()
{
    unsort(0, _size-1);
}
#endif //HLIB_VECTOR_UNSORT_H
