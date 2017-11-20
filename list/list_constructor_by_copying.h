//
// Created by Housz on 2017/11/20.
//

#pragma once
#ifndef HLIB_LIST_CONSTRUCTOR_BY_COPYING_H
#define HLIB_LIST_CONSTRUCTOR_BY_COPYING_H

//基于复制的构造

//复制列表中自位置p起的n项
template <class T>
List<T>::List(ListNode<T> *p, int n)
{
    copyNodes(p, n);
}

//整体复制列表L
template <class T>
List<T>::List(List<T> const &L)
{
    copyNodes(L.first(), L.size());
}

//复制L中自r项开始的n项
template <class T>
List<T>::List(List<T> const &L, Rank r, Rank n)
{
    copyNodes(L[r], n);
}

#endif //HLIB_LIST_CONSTRUCTOR_BY_COPYING_H
