#include<iostream>
using namespace std;
int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;   //p is pointing to first location of array
    int *q = &A[4];
    cout<<q-p;
    cout<<p-q;
    cout<<p<<endl;
    cout<<p+2<<endl;
    cout<<p-2<<endl;
    cout<<*p<<endl;//dereferencing
    // move pointer to next location to print 4
    p++;
    cout<<*p<<endl;
    
    p=p+3; // pointer will be pointing on 10
    cout<<*p<<endl;
    // now from line 11 print 2 without moving pointer
    cout<<p[-4]<<endl;
    
    return 0;
}