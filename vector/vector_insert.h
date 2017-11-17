//
// Created by 12151 on 2017/11/16.
//
#pragma once
#ifndef HLIB_VECTOR_INSERT_H
#define HLIB_VECTOR_INSERT_H

template <class T>
Rank Vector<T>::insert(Rank r, T const &e)
{
    expand();

}
#endif //HLIB_VECTOR_INSERT_H
