//
// Created by Housz on 2017/11/29.
//

#pragma once
#ifndef HLIB_BINNODE_INSERT_H
#define HLIB_BINNODE_INSERT_H

template <class T>
BinNodePosi(T) BinNode<T>::insertAsLC(T const & e)
{
    return lc = new BinNode(e, this);
}

template <class T>
BinNodePosi(T) BinNode<T>::insertAsRC(T const & e)
{
    return rc = new BinNode(e, this);
}
#endif //HLIB_BINNODE_INSERT_H
