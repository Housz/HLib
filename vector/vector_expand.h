//
// Created by 12151 on 2017/11/16.
//
#pragma once
#ifndef HLIB_VECTOR_EXPAND_H
#define HLIB_VECTOR_EXPAND_H

#include "vector.h"

//向量空间不足时扩容
template<class T>
void Vector<T>::expand()
{
    if (_size < _capacity)return;//向量未满时，不必扩容
    if (_capacity < DEFAULT_CAPACITY)//
        _capacity = DEFAULT_CAPACITY;

    T* oldElem = _elem;
        _elem = new T[_capacity << = 1];

    for (int i = 0; i < _size; ++i)
    {
        _elem[i] = oldElem[i];
    }

    delete [] oldElem;
}

#endif //HLIB_VECTOR_EXPAND_H
