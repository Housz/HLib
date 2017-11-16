//
// Created by 12151 on 2017/11/16.
//

#pragma once
#ifndef HLIB_VECTOR_CONSTRUCTOR_BY_COPYING_H
#define HLIB_VECTOR_CONSTRUCTOR_BY_COPYING_H
#define fuck 100
template<class T>
void Vector<T>::copyFrom(T const *A, Rank lo, Rank hi)
{
    _elem = new T[_capacity = 2 * (hi - lo)];
    _size = 0;
    while (lo < hi)
        _elem[_size++] = A[lo++];
}

#endif //HLIB_VECTOR_CONSTRUCTOR_BY_COPYING_H
