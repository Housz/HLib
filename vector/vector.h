//
// Created by Housz on 2017/11/16.
//
#pragma once
#ifndef HLIB_VECTOR_H
#define HLIB_VECTOR_H

typedef int Rank;  //秩
#define DEFAULT_CAPACITY 3  //默认初始容量

template<class T>
class Vector
{
protected:
    Rank _size; //规模
    int _capacity; //容量
    T *_elem;   //数据区

    void copyFrom(T const *A, Rank lo, Rank hi);    //复制数组区间A[lo, hi)
    void expand();//向量空间不足时扩容
    void shrink();//向量实际规模远小于向量容量（下溢underflow）缩容

//    bool bubble(Rank lo, Rank hi);
//
//    void bubbleSort(Rank lo, Rank hi);
//
//    Rank max(Rank lo, Rank hi);
//
//    void selectionSort(Rank lo, Rank hi);
//
//    void merge(Rank lo, Rank mi, Rank hi);
//
//    void mergeSort(Rank lo, Rank hi);
//
//    Rank partition(Rank lo, Rank hi);   //轴点构造算法
//    void quickSort(Rank lo, Rank hi);
//
//    void heapSort(Rank lo, Rank hi);

public:
//构造函数
    //容量c， 规模s，所有元素初始化v
    Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0)
    {
        _elem = new T[_capacity = c];
        for (_size = 0; _size < s; _elem[_size++] = v);
    }

    //数组整体复制
    Vector(T const *A, Rank n) { copyFrom(A, 0, n); }

    Vector(T const *A, Rank lo, Rank hi) { copyFrom(A, lo, hi); }

    Vector(Vector<T> const &V) { copyFrom(V._elem, 0, V.size()); }

    Vector(Vector<T> const &V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); }

//析构函数
    ~Vector() { delete[] _elem; }

//readonly interfaces
    Rank size() const { return _size; }

    bool empty() const { return !_size; }

    //判断向量是否已经排序
    int disordere() const;

    Rank find(T const &e) const { return find(e, 0, _size); }

    Rank find(T const &e, Rank lo, Rank hi) const;//无序向量区间查找

    Rank search(T const &e) const { return (0 >= _size) ? -1 : search(e, 0, _size); }

    Rank search(T const &e, Rank lo, Rank hi) const;//有序向量区间查找

//writable interfaces
    T& operator[](Rank r) const;

    Vector<T>& operator=(Vector<T> const &);

    T remove(Rank r);

    int remove(Rank lo, Rank hi);

    Rank insert(Rank r, T const &e);

    Rank insert(T const &e);

    void sort(Rank lo, Rank hi);

    void unsort(Rank lo, Rank hi);//置乱
    void unsort();//整体置乱

    int deduplicate();//有序向量去重

    int uniquify();//无序向量去重

//traverse
    void traverse(void(*)(T &));//函数指针机制实现遍历

    template<class VST>
    void traverse(VST &);//函数对象机制实现遍历

};

#include "vector_implementation.h"

#endif //HLIB_VECTOR_H
