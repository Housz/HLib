//
// Created by Housz on 2017/11/19.
//
#pragma once
#ifndef HLIB_SWAP_H
#define HLIB_SWAP_H

//swap函数
template<class T>
static void swap(T &a, T &b)
{
    T c(a);
    a = b;
    b = c;
}

#endif //HLIB_SWAP_H
