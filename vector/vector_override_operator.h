//
// Created by Housz on 2017/11/17.
//
#pragma once
#ifndef HLIB_VECTOR_OVERRIDE_OPERATOR_H
#define HLIB_VECTOR_OVERRIDE_OPERATOR_H

#include "vector.h"

//重载下标运算符
template <class T>
T& Vector<T>::operator[] (Rank r) const
{
    return _elem[r];
}

//重载赋值运算符
template <class T>
Vector<T>& Vector<T>::operator=(Vector<T> const & V)
{
    if (_elem) delete [] _elem; //释放原有内容
copyFrom(V._elem, 0, V.size());//整体复制
return *this;//返回当前对象的引用，以便链式赋值
}

#endif //HLIB_VECTOR_OVERRIDE_OPERATOR_H
