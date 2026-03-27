#include<iostream>
using namespace std;
inline int square(int a)
{
    return a*a;
}
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    cout << "Sq of Number : " << square(5) << "\nCube of Number : " << cube(3);
    return 0;
}
