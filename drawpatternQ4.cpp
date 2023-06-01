#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l=1;
    for(i=1 ; i<=4 ; i++)
    {
        for(j=i;j<4;j++)
        cout<<" ";
    for(k=1;k<=l;k++)
    {
        cout<<"*";
    }
    l+=2;
    cout<<endl;
    }
    return 0;
}