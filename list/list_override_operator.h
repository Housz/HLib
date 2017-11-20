//
// Created by Housz on 2017/11/20.
//
#pragma once
#ifndef HLIB_LIST_OVERRIDE_OPERATOR_H
#define HLIB_LIST_OVERRIDE_OPERATOR_H

#include "list.h"
//重载操作符 [] ，可通过秩访问节点
//效率低
template <class T>
T& List<T>::operator[](Rank r) const
{
    ListNodePosi(T) p = first();

    while(0 < r--)
        p = p->succ;

    return p->data;
}
#endif //HLIB_LIST_OVERRIDE_OPERATOR_H
