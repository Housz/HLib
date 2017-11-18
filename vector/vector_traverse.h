
//
// Created by Housz on 2017/11/17.
//

#pragma once
#ifndef HLIB_VECTOR_TRAVERSE_H
#define HLIB_VECTOR_TRAVERSE_H

//#include "vector.h"

//函数指针机制
template<class T>
void Vector<T>::traverse(void (*visit)(T &))
{
    for (int i = 0; i < _size; ++i)
    {
        visit(_elem[i]);
    }
}

//函数对象机制
template<class T> template<class VST>
void Vector<T>::traverse(VST &visit)
{
    for (int i = 0; i < _size; ++i)
    {
        visit(_elem[i]);
    }
}



/*举例:每个元素+1
template <class T>
struct Increase
{
    virtual bool operator() (T& e)
    {
        e++;
    }
};

template <class T>
void increase(Vector<T>& V)
{
    V.traverse(Increase<T>());
}

 * */
#endif //HLIB_VECTOR_TRAVERSE_H
