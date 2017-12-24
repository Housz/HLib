//
// Created by Housz on 2017/11/20.
//

#include "iostream"
#include "list.h"
using namespace std;


class visit
{
public:
    template <class T>
    void operator() (T &e)
    {
        cout << e << endl;
    }
};
/*
int main()
{
    List<int> ls;
    for (int i = 0; i < 10; ++i)
    {
        ls.insertAsLast(i+1);
    }

    visit v;
    ls.traverse(v);
    system("pause");
    return 0;
}*/