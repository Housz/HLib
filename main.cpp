#include "iostream"
#include "vector/vector.h"
#include "cstdlib"
#include "cstdio"
#include "ctime"

using std::cout;
using std::cin;
using std::endl;

struct Increase
{
    template<class T>
    bool operator()(T &e)
    {
        std::cout << e << std::endl;
    }
};

int main()
{
    Vector<int> v;

    srand((unsigned) time(NULL));

    for (int i = 0; i < 10000; ++i)
    {
        int t = rand() % 100 + 1;
//        cout << t << "(" << i << ")"<<" ";
//        for (int j = 0; j < t; ++j)
//        {
//            cout << "|";
//        }
//        cout << " " << t << endl;
        v.insert(t);
    }


    cout << endl << "*********************" << endl ;

//    cout << v.size();
//
    v.sort();

    for (int i = 0; i < 10000; ++i)
    {
        //cout << v[i] <<  "(" << i << ")"<<" ";
        for (int j = 0; j < v[i]; ++j)
        {
            cout << "|";
        }
        cout << " " << v[i] << endl;
    }
    system("pause");
    return 0;
}