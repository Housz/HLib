//
// Created by Housz on 2017/11/26.
//

#pragma once
#ifndef HLIB_BINNODE_H
#define HLIB_BINNODE_H

#define BinNodePosi(T) BinNode<T>*//节点位置指针
#define stature(p) ((p) ? (p)->height : -1)//节点高度（空树高度为-1）

//二叉树节点
template <class T>
struct BinNode
{
//成员
    T data;//数据
    BinNodePosi(T) parent;//父节点
    BinNodePosi(T) lc;//左子节点
    BinNodePosi(T) rc;//右子节点
    int height;//高度
//构造函数
    BinNode(): parent(NULL), lc(NULL), rc(NULL), height(0) {}
    BinNode(T _data, BinNodePosi(T) _p = NULL, BinNodePosi(T) _lc = NULL, BinNodePosi(T) _rc = NULL, int _height = 0)
            :data(_data), parent(_p), lc(_lc), rc(_rc), height(_height) {}
//操作接口
    int size();//统计当前节点子节点总数
    BinNodePosi(T) insertAsLC(T const &);//作为当前节点左子节点插入
    BinNodePosi(T) insertAsRC(T const &);//作为当前节点右子节点插入
    BinNodePosi(T) succ();//取当前节点的直接后继

    //子树遍历
    template <class VST> void travLevel(VST &);//层序遍历
    template <class VST> void travPre(VST &);//先序遍历
    template <class VST> void traIn(VST &);//中序遍历
    template <class VST> void traPost(VST &);//后序遍历
//比较器、判等器
    bool operator <  (BinNode const& bn) { return  data < bn.data; }
    bool operator >  (BinNode const& bn) { return  data > bn.data; }
    bool operator == (BinNode const& bn) { return data == bn.data; }
};

#include "binnode_implementation.h"

#endif //HLIB_BINNODE_H
