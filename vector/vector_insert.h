//
// Created by Housz on 2017/11/16.
//
#pragma once
#ifndef HLIB_VECTOR_INSERT_H
#define HLIB_VECTOR_INSERT_H

#include "vector.h"

template<class T>
Rank Vector<T>::insert(Rank r, T const &e)
{
    expand();//若有必要则扩容

    for (int i = _size; i > r; i--)//自后向前，r后继元素依次后移一单位
    {
        _elem[i] = _elem[i - 1];
    }
    _elem[r] = e;//在r位置插入e
    _size++;//更新向量容量
    return r;//返回秩
}

#endif //HLIB_VECTOR_INSERT_H
