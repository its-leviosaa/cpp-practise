//cpp program to reverse a number
//extract and then make a number
#include<iostream>
using namespace std;
int main()
{
    int a,d,r=0;
    cout<<"Enter any n digit number";
    cin>>a;
    while (a != 0)
    {
        d=a%10;
        r=r*10+d;
        a=a/10;
    }
    cout<<"Reverse of the number is"<<r;

} 