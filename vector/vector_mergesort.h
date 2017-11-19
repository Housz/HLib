//
// Created by Housz on 2017/11/19.
//
#pragma once
#ifndef HLIB_VECTOR_MERGESORT_H
#define HLIB_VECTOR_MERGESORT_H

//向量归并排序算法
template<class T>
void Vector<T>::mergeSort(Rank lo, Rank hi)
{
    if (hi - lo < 2) return;

    int mi = (hi - lo) / 2;
    mergeSort(lo, mi);//[lo, mi)排序
    mergeSort(mi+1, hi);//(mi, hi)排序
    merge(lo, mi, hi);//归并
}

#endif //HLIB_VECTOR_MERGESORT_H
