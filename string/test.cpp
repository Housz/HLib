//
// Created by Housz on 2017/12/24.
//

#pragma once

#include "BF2.h"
#include <iostream>

int main()
{
    char *p = "world";
    char *t = "hello,world";
    int n = match(p, t);
    printf("%d",n);
    return 0;
}