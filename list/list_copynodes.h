//
// Created by Housz on 2017/11/20.
//

#pragma once
#ifndef HLIB_LIST_COPYNODES_H
#define HLIB_LIST_COPYNODES_H

//内部方法，复制列表中自位置p开始的n项
template <class T>
void List<T>::copyNodes(ListNode <T> *p, int n)
{
    init();
    while(n--)
    {
        insertAsLast(p->data);
        p = p->succ;
    }
}
#endif //HLIB_LIST_COPYNODES_H
