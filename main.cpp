#include "iostream"
#include "vector/vector.h"



//
//typedef void (*fun)(int a);
//
//void fuck(int a)
//{
//    std::cout << a << std::endl;
//}


struct Increase
{
    template <class T>
    bool operator() (T& e)
    {
        std::cout << e << std::endl;
    }
};

//template <class T>
//void increase(Vector<T>& V)
//{
//    V.traverse(Increase<T>());
//}

int main()
{
    Vector<double> v;
    v.insert(1.1);
    v.insert(2.2);
    v.insert(3.3);


//    v.traverse(visit<int>());
//    fun f = fuck;
//    v.traverse(f);
//    std::cout << v.search(2);
//    v.unsort();
//    std::cout << v[0] << std::endl;
//    std::cout << v[1] << std::endl;
//    std::cout << v[2] << std::endl;

    Increase in;
    v.traverse(in);
    return 0;
}