//
// Created by Housz on 2017/11/26.
//

#pragma once
#ifndef HLIB_BINTREE_H
#define HLIB_BINTREE_H
//二叉树
#include "binnode.h"

template<class T>
class BinTree
{
protected:
    int _size;//规模
    BinNodePosi(T)_root;//根节点
    virtual int updateHeight(BinNodePosi(T)x);//更新节点x的高度
    void updateHeightAbove(BinNodePosi(T)x);//更新节点x及其祖先的高度
public:
    BinTree() : _size(0), _root(NULL) {}
    ~BinTree() { if (0 < _size) remove(_root); }
    int size() const { return _size; }
    bool empty() const { return !_root; }
    BinNodePosi(T) root() const { return _root; }
    BinNodePosi(T) insertAsRoot( T const& e);

};


#include "bintree_implementation.h"

#endif //HLIB_BINTREE_H
