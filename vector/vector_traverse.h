
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



/*举例:输出每个元素
struct Increase
{
    template <class T>
    bool operator() (T& e)
    {
        std::cout << e << std::endl;
    }
};

int main()
{
    Vector<double> v;
    v.insert(1.1);
    v.insert(2.2);
    v.insert(3.3);

    Increase in;
    v.traverse(in);
    return 0;
}


 * */
#endif //HLIB_VECTOR_TRAVERSE_H
