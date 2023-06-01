#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p;  //declaration
    p = &x;  //assignment
    cout<<x<<endl; //give x value
    cout<<&x<<endl;//give address of x
    cout<<p<<endl;//same as adress of x
    cout<<&p<<endl;//give address where p is created inside memory
    cout<<*p<<endl;//show data where p is pointing
    return 0;
}