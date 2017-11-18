//
// Created by Housz on 2017/11/18.
//

#ifndef HLIB_VECTOR_UNIQUIFY_H
#define HLIB_VECTOR_UNIQUIFY_H

#include "vector.h"

//有序向量去重
//复杂度O(n)
template<class T>
int Vector<T>::uniquify()
{
    Rank i = 0, j = 0;

    while (++j < _size)
    {
        if (_elem[i] != _elem[j])
            _elem[++i] = _elem[j];
    }
    _size = ++i;
    shrink();
    return j - i;//返回被删除元素数目
}

#endif //HLIB_VECTOR_UNIQUIFY_H
