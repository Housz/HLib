//
// Created by Housz on 2017/11/20.
//
#pragma once
#ifndef HLIB_LISTNODE_INSERTASPRED_H
#define HLIB_LISTNODE_INSERTASPRED_H

template <class T>
ListNodePosi(T) ListNode<T>::insertAsPred(T const &e)
{
    ListNodePosi(T) t = new ListNode(e, pred, this);
    pred->succ = t;
    pred = t;
    return t;
}
#endif //HLIB_LISTNODE_INSERTASPRED_H
