//
// Created by Housz on 2017/11/20.
//
#pragma once
#ifndef HLIB_LIST_H
#define HLIB_LIST_H

#include "listnode.h"

//列表模板类
template<class T>
class List
{
private:
    int _size; //规模
    ListNodePosi(T)header; //头哨兵
    ListNodePosi(T)trailer;//尾哨兵

    /*关于头尾哨兵
     *List对象私有的头哨兵（header）和尾哨兵（trailer）始终存在，但对外不可见，从外部等效视为NULL。
     *结构上header紧邻于首节点（fisrt node）之前，trailer紧邻于尾节点（last node）之后。
     * 哨兵节点的引入使得相关算法不必对各种边界退化情况特殊处理，避免出错。
     * */

protected:
    void init();//列表创建时初始化
    int clear();//清除所有节点
    void copyNodes(ListNodePosi(T), int);//复制列表中自位置p起的n项
    void merge(ListNodePosi(T)&, int, List<T> &, ListNodePosi(T), int);//归并
    void mergeSort(ListNodePosi(T), int);//对从p开始连续n个节点归并排序
    void selectionSort(ListNodePosi(T), int);//对从p开始连续n个节点选择排序
    void insertSort(ListNodePosi(T), int);//对从p开始连续n个节点插入排序

public:
//构造函数
    List();

    List(List<T> const &L);//整体复制
    List(List<T> const &L, Rank r, Rank n);//复制列表L自第r项起的n项
    List(ListNodePosi(T)p, int n);//复制列表中自位置p起的n项
//析构函数
    ~List();

//只读接口
    Rank size() const { return _size; }//规模
    bool empty() const { return _size <= 0; }//判空
    T& operator[] (Rank r) const;//重载下标运算符，效率低

    ListNodePosi(T) first() const { return header->succ; }
    ListNodePosi(T) last() const { return trailer->pred; }

    ListNodePosi(T) find(T const& e) const;
    ListNodePosi(T) find (T const& e, int n, ListNodePosi(T) p) const;

//可写接口
    ListNodePosi(T) insertAsFirst(T const& e);//将e当作首节点插入
    ListNodePosi(T) insertAsLast(T const& e);//将e当作末节点插入
    ListNodePosi(T) insertA(ListNodePosi(T) p, T const& e);//将e当作p后继插入
    ListNodePosi(T) insertB(ListNodePosi(T) p, T const& e);//将e当作p前驱插入

    T remove (ListNodePosi(T) p);//删除合法位置p处节点，返回别删除数据

};

#include "list_implementation.h"
#endif //HLIB_LIST_H
