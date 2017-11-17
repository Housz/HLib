//
// Created by Housz on 2017/11/16.
//
#pragma once
#ifndef HLIB_VECTOR_EXPAND_H
#define HLIB_VECTOR_EXPAND_H

#include "vector.h"

//向量空间不足时扩容
//扩容后向量容量为原容量两倍
//单次扩容时间复杂度为O(n)，分摊意义下复杂度为O(1)
template<class T>
void Vector<T>::expand()
{
    if (_size < _capacity)return;//向量未满时，不必扩容
    if (_capacity < DEFAULT_CAPACITY)//不低于最小容量
        _capacity = DEFAULT_CAPACITY;

    T* oldElem = _elem;
        _elem = new T[_capacity <<= 1];//容量加倍

    for (int i = 0; i < _size; ++i) //复制原向量内容（T为基本类型，或已重载赋值操作符'='）
    {
        _elem[i] = oldElem[i];
    }

    delete [] oldElem;//释放原空间
}

#endif //HLIB_VECTOR_EXPAND_H
