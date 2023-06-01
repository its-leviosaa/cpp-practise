#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers a and b :"<<endl;
    cin>>a>>b;
    if (a>b)
    {
        cout<<a<<" is greater than "<<b;
    }
    else
    {
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}
//if we will take the same value then else block statement will get printed because condition of else block is not true