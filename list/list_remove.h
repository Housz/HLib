//
// Created by Housz on 2017/11/20.
//

#pragma once
#ifndef HLIB_LIST_REMOVE_H
#define HLIB_LIST_REMOVE_H

template <class T>
T List<T>::remove(ListNode<T> *p)
{
    T e = p->data;//备份被删除节点数据

    p->pred->succ = p->succ;
    p->succ->pred = p->pred;

    delete p;

    return e;//返回被删除节点数据
}
#endif //HLIB_LIST_REMOVE_H
