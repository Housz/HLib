//
// Created by Housz on 2017/11/20.
//
#pragma once
#ifndef HLIB_LIST_INITIALIZE_H
#define HLIB_LIST_INITIALIZE_H

#include "list.h"

template <class T>
void List<T>::init()
{
    header = new ListNode<T>;
    trailer = new ListNode<T>;

    header->succ = trailer;
    header->pred = nullptr;

    trailer->pred = header;
    trailer->succ = nullptr;

    _size = 0;
}
#endif //HLIB_LIST_INITIALIZE_H
