//
// Created by Housz on 2017/11/18.
//
#pragma once
#ifndef HLIB_VECTOR_SEARCH_H
#define HLIB_VECTOR_SEARCH_H

//#include "vector.h"

//有序向量查找算法
//在有序向量区间[lo, hi)内，确定不大于e的最后一个节点的秩

template<class T> static Rank binSearch(T *V, T const &e, Rank lo, Rank hi);

template<class T>
Rank Vector<T>::search(T const &e, Rank lo, Rank hi) const
{
    return binSearch(_elem, e, lo, hi);
}


template<class T>
Rank Vector<T>::search(T const &e) const
{
    return (0 >= _size) ? -1 : search(e, 0, _size);
}

#ifndef BINARY_SEARCH
#define BINARY_SEARCH

//二分查找算法（a）
//有多个命中元素时不能保证返回秩最大者；查找失败返回-1，不能指示失败位置
//复杂度O(logn)

template<class T>
static Rank binSearch(T *V, T const &e, Rank lo, Rank hi)
{
    while (lo < hi)//二分查找迭代实现
    {
        Rank mi = (lo + hi) >> 1;//以中点为轴
        if (e < V[mi])hi = mi;
        else if (e > V[mi]) lo = mi + 1;
        else return mi;//查找成功
    }
    return -1;//查找失败
}

#endif //BINARY_SEARCH

#ifdef FIBONACCI_SEARCH

#endif //FIBONACCI_SEARCH

#endif //HLIB_VECTOR_SEARCH_H
