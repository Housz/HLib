//
// Created by Housz on 2017/11/17.
//

#pragma once
#ifndef HLIB_VECTOR_DEDUPLICATE_H
#define HLIB_VECTOR_DEDUPLICATE_H

//#include "vector.h"

//删除无序向量中重复元素
//复杂度O(n2)
template<class T>
int Vector<T>::deduplicate()
{
    int oldSize = _size;
    Rank i = 1;//从_elem[1]开始
    while(i < _size)
        (find(_elem[i], 0, i) < 0) ? i++ : remove(i);
    return oldSize - _size;//返回被删除总数
}
#endif //HLIB_VECTOR_DEDUPLICATE_H
