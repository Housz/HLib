//
// Created by Housz on 2017/11/20.
//

#pragma once
#ifndef HLIB_LIST_INSERT_H
#define HLIB_LIST_INSERT_H

template<class T>
ListNodePosi(T)List<T>::insertAsFirst(T const &e)
{
    _size++;
    return header->insertAsSucc(e);
}

#endif //HLIB_LIST_INSERT_H
