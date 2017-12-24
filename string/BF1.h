//
// Created by Housz on 2017/12/24.
//

#pragma once
#ifndef HLIB_BF1_H
#define HLIB_BF1_H

#include <iostream>
#include <cstring>
int match(char* P, char* T)
{
    size_t n = strlen(T), i = 0;    //文本串长度n，当前接受比较字符位置i
    size_t m = strlen(P), j = 0;    //模式串长度m，当前接受比较字符位置j

    while (j < m && i < n)  //自左向右逐个比较字符
    {
        if (T[i] == P[j])   //若当前字符匹配成功，则跳到下一个字符
        {
            i++;
            j++;
        }
        else                //若当前字符匹配失败，则文本串回退、模式串复位
        {
            i -= j - 1;
            j = 0;
        }
    }
    return i - j;   //如果匹配成功，i-j为P相对于T的对齐位置；如果匹配失败，i-j必然>n-m
}
#endif //HLIB_BF1_H
