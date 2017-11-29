//
// Created by Housz on 2017/11/29.
//

#pragma once
#ifndef HLIB_BINTREE_UPDATEHEIGHT_H
#define HLIB_BINTREE_UPDATEHEIGHT_H

template<class T>
T _max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

template <class T>
int BinTree<T>::updateHeight(BinNodePosi(T) x)
{
    return x->height = 1 + _max ( stature)
}
#endif //HLIB_BINTREE_UPDATEHEIGHT_H
