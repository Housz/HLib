//
// Created by Housz on 2017/11/20.
//

#pragma once
#ifndef HLIB_LIST_CLEAR_H
#define HLIB_LIST_CLEAR_H

template <class T>
int List<T>::clear()
{
    int oldSize = _size;

    while(0 < _size)
        remove(header->succ);

    return oldSize;
}
#endif //HLIB_LIST_CLEAR_H
