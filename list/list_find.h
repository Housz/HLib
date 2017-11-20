//
// Created by Housz on 2017/11/20.
//

#pragma once
#ifndef HLIB_LIST_FIND_H
#define HLIB_LIST_FIND_H


//无序区间查找,在无序列表内节点p的n个前驱内找到等于e的最后者
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
template <class T>
ListNodePosi(T) List<T>::find(T const &e) const
{
    find(e, _size, trailer);
}
#endif //HLIB_LIST_FIND_H
