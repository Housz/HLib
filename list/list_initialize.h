//
// Created by Housz on 2017/11/20.
//
#pragma once
#ifndef HLIB_LIST_INITIALIZE_H
#define HLIB_LIST_INITIALIZE_H

template <class T>
void List<T>::init()
{
    header = new ListNode<T>;
    trailer = new ListNode<T>;

    header->succ = trailer;
    header->pred = NULL;

    trailer->pred = header;
    trailer->succ = NULL;

    _size = 0;
}
#endif //HLIB_LIST_INITIALIZE_H
