#include<iostream>
using namespace std;
class GFG
{
    string name;
    int roll;
public:
GFG()
{
    name = "Stuti Heble";
    roll = 15;
    cout << "Default constructor called " "";
}
void display()
{
cout << "name :" << name <<" "<<"roll no:"<<roll;
}
};
int main ()
{
    GFG s1;
    s1.display();
    return 0;
}
