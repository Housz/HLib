//
// Created by Housz on 2017/11/19.
//
#pragma once
#ifndef HLIB_VECTOR_BUBBLESORT_H
#define HLIB_VECTOR_BUBBLESORT_H

//向量冒泡排序
template <class T>
void Vector<T>::bubbleSort(Rank lo, Rank hi)
{
    while (! bubble(lo, hi--));//逐层扫描交换直到整体有序
}

#endif //HLIB_VECTOR_BUBBLESORT_H
