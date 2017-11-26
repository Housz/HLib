//
// Created by Housz on 2017/11/26.
//

#pragma once
#ifndef HLIB_LIST_UNIQUIFY_H
#define HLIB_LIST_UNIQUIFY_H

//有序列表唯一化，复杂度O(n)
template<class T>
int List<T>::uniquify()
{
    if (_size < 2) return 0;//平凡情况无需去重

    int oldSize = _size;
    ListNodePosi(T)p = first();//相同值区段起点
    ListNodePosi(T)q;//相同值区段终点
    while (trailer != (q = p->succ))
        if (p->data != q->data) p = q;
        else remove(q);
    return oldSize - _size;
}

#endif //HLIB_LIST_UNIQUIFY_H
