//
// Created by Housz on 2017/11/21.
//

#pragma once
#ifndef HLIB_LIST_DESTRUCTOR_H
#define HLIB_LIST_DESTRUCTOR_H

template <class T>
List<T>::~List()
{
    clear();
    delete header;
    delete trailer;
}
#endif //HLIB_LIST_DESTRUCTOR_H
