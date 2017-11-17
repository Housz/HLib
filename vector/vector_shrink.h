//
// Created by Housz on 2017/11/17.
//
#pragma once
#ifndef HLIB_VECTOR_SHRINK_H
#define HLIB_VECTOR_SHRINK_H

#include "vector.h"

//装填因子（_size/_capacity）过小时（设为25%）压缩向量所占空间（容量减半）
//单次扩容时间复杂度为O(n)，分摊意义下复杂度为O(1)

template<class T>
void Vector<T>::shrink()
{
    if (_capacity < DEFAULT_CAPACITY << 1)return;//不会收缩到DEFAULT_CAPACITY以下
    if (_size << 2 > _capacity) return;//装填因子25%为界

    T* oldElem = _elem;
    _elem = new T[_capacity >>= 1];//容量减半
    for (int i = 0; i < _size; ++i)//复制原向量内容
    {
        _elem[i] = oldElem[i];
    }
    delete [] oldElem;
}

#endif //HLIB_VECTOR_SHRINK_H
