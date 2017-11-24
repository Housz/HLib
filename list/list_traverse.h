//
// Created by Housz on 2017/11/24.
//

#pragma once
#ifndef HLIB_LIST_TRAVERSE_H
#define HLIB_LIST_TRAVERSE_H

//列表遍历，函数指针实现
template <class T>
void List<T>::traverse(void (* visit)(T &))
{
    for(ListNodePosi(T) p = header->succ; p!=trailer; p=p->succ)
    {
        visit(p->data);
    }
}

//列表遍历,函数对象实现
template <class T> template <class VST>
void List<T>::traverse(VST & visit)
{
    for(ListNodePosi(T) p = header->succ; p!=trailer; p=p->succ)
    {
        visit(p->data);
    }
}
#endif //HLIB_LIST_TRAVERSE_H
