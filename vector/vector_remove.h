//
// Created by Housz on 2017/11/17.
//
#pragma once
#ifndef HLIB_VECTOR_REMOVE_H
#define HLIB_VECTOR_REMOVE_H

//#include "vector.h"
//将删除单元素看作删除区间的特例，基于后者实现前者
//可将移动操作总次数控制在O(m)内，而与待删除区间长度无关（m = _size - hi）

//删除区间[lo, hi)
template<class T>
int Vector<T>::remove(Rank lo, Rank hi)
{
    if (lo == hi) return 0;

    while (hi < _size) _elem[lo++] = _elem[hi++];
    _size = lo;
    shrink();//如有必要缩容
    return hi - lo;//返回被删除元素数目
}

//删除单个元素
template<class T>
T Vector<T>::remove(Rank r)
{
    T e = _elem[r];
    remove(r, r+1);
    return e;//返回被删除元素
}

#endif //HLIB_VECTOR_REMOVE_H
