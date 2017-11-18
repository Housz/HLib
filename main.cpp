#include "iostream"
#include "vector/vector.h"


template <class T>
struct visit
{
    virtual void operator() (T& e)
    {
        std::cout << e << std::endl;
    }
};
int main()
{
    Vector<int> v;
    v.insert(1);
    v.insert(2);
    v.insert(3);

//    v.traverse(visit()<int>);
    std::cout << v[0];
    return 0;
}