//
// Created by Housz on 2017/11/19.
//

#pragma once
#ifndef HLIB_VECTOR_BUBBLE_H
#define HLIB_VECTOR_BUBBLE_H

//冒泡排序算法每层扫描交换
template <class T>
bool Vector<T>::bubble(Rank lo, Rank hi)
{
    bool sorted = true;//整体有序标志
    while( ++lo <= hi)//自前向后逐个扫描
    {
        if (_elem[lo-1] > _elem[lo])
        {
            sorted = false;//表示向量尚未整体有序
            swap(_elem[lo - 1], _elem[lo]);//交互使局部有序
        }
    }
    return sorted;//借助sorted标志可以及时退出外层循环，避免总是做n-1次扫描交换
}

#endif //HLIB_VECTOR_BUBBLE_H
