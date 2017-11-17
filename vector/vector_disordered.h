//
// Created by Housz on 2017/11/16.
//

#ifndef HLIB_VECTOR_DISORDERED_H
#define HLIB_VECTOR_DISORDERED_H

#pragma once
//返回向量中逆序相邻元素对的总数
template <class T> int Vector<T>::disordere() const
{
    int n = 0;
    for (int i = 0; i < _size; ++i)
    {
        if(_elem[i-1] > _elem[i])
            n++;
    }
    return n;
}
#endif //HLIB_VECTOR_DISORDERED_H
