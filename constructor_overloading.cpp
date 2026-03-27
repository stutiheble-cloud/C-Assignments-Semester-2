#include<iostream>
using namespace std;
class area
{
    public :
    area(int l, int b)
    {
        int c = l*b;
        cout << "area =" " " << c;    
    } 
};
int main ()
{
    area lb(10,20);
    return 0;
}
