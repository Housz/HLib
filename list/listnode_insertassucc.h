//
// Created by Housz on 2017/11/20.
//
#pragma once
#ifndef HLIB_INSERTASSUCC_H
#define HLIB_INSERTASSUCC_H

template <class T>
ListNodePosi(T) ListNode<T>::insertAsSucc(T const &e)
{
    ListNodePosi(T) t = new ListNode(e, this, succ);
    succ->pred = t;
    succ = t;
    return t;
}

#endif //HLIB_INSERTASSUCC_H
