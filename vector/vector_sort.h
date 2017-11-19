//
// Created by Housz on 2017/11/18.
//

#pragma once
#ifndef HLIB_VECTOR_SORT_H
#define HLIB_VECTOR_SORT_H

//#include "vector.h"

template<class T>
void Vector<T>::sort(Rank lo, Rank hi)
{
//    mergeSort(lo, hi);
    bubbleSort(lo, hi);
}

template<class T>
void Vector<T>::sort()
{
    sort(0, _size - 1);
}

#endif //HLIB_VECTOR_SORT_H
