//
// Created by Housz on 2017/11/17.
//

#ifndef HLIB_VECTOR_FIND_H
#define HLIB_VECTOR_FIND_H

#include "vector.h"

//无序向量顺序查找
//返回最后一个元素e的位置，查找失败则返回lo-1
template <class T>
Rank Vector<T>::find(T const &e, Rank lo, Rank hi) const
{
    while((lo < hi--) && e != _elem[hi]);//由后向前顺序查找（短路特性）
    return hi;
}

#endif //HLIB_VECTOR_FIND_H
