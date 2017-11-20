//
// Created by Housz on 2017/11/20.
//
#pragma once
#ifndef HLIB_LISTNODE_H
#define HLIB_LISTNODE_H

typedef int Rank;//秩
#define ListNodePosi(T) ListNode<T>*    //列表节点位置

//列表节点模板类（双向链表形式）
template<class T>
struct ListNode
{
//成员
    T data;//数值
    ListNodePosi(T)pred;//前驱
    ListNodePosi(T)succ;//后继

//构造函数
    ListNode() {}

    ListNode(T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL) : data(e), pred(p), succ(s) {}

//操作接口
    ListNodePosi(T) insertAsPred(T const& e);//紧靠当前节点之前插入新节点
    ListNodePosi(T) insertAsSucc(T const& e);//紧靠当前节点之后插入新节点
};

#include "listnode_implementation.h"

#endif //HLIB_LISTNODE_H
