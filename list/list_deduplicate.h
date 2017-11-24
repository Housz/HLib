//
// Created by Housz on 2017/11/24.
//

#pragma once
#ifndef HLIB_LIST_DEDUPLICATE_H
#define HLIB_LIST_DEDUPLICATE_H

template<class T>
int List<T>::deduplicate()
{
    if (_size < 2) return 0;//平凡列表不必去重
    int oldSize = _size;//原规模
    ListNodePosi(T)p = header;//
    Rank r = 0;
    while (trailer != (p = p->succ))//依次到达末节点
    {
        ListNodePosi(T) q = find(p->data, r, p);//在p的r个前驱中查找雷同者
        q ? remove(q) : r++;
    }
    return oldSize - _size;//返回规模变化量
}

#endif //HLIB_LIST_DEDUPLICATE_H
