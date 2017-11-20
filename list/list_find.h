//
// Created by Housz on 2017/11/20.
//

#pragma once
#ifndef HLIB_LIST_FIND_H
#define HLIB_LIST_FIND_H

#include "list.h"

//无序区间查找
//复杂度O(n)
template<class T>
ListNodePosi(T)List<T>::find(T const &e, int n, ListNode<T> *p) const
{
    while (0 < n--)
    {
        if (e == (p = p->pred)->data)
            return p;
    }
    return nullptr;
}
//无序列表查找
#endif //HLIB_LIST_FIND_H
