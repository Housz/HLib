//
// Created by Housz on 2017/12/24.
//

#pragma once
#ifndef HLIB_BF2_H
#define HLIB_BF2_H

#include <iostream>
#include <cstring>

int match (char* P, char* T)
{
    size_t n = strlen(T), i = 0;    //文本串长度n，与模式串首字符的对齐位置i
    size_t m = strlen(P), j;        //模式串长度m，当前接受比较的字符的位置j

    for (i = 0; i < n-m; ++i)   //文本串从第i个字符起，
    {
        for (j = 0; j < m; j++) //与模式串中对应字符逐个比较
        {
            if (T[i+j] != P[j]) //若失败，模式串整体右移一个字符，做下一轮比较
                break;
        }
        if (j >= m) break;      //匹配成功
    }
    return i;   //若匹配成功，则返回i为成功位置；若匹配失败，返回i必然>n-m
}
#endif //HLIB_BF2_H
