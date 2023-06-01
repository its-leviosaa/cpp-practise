#include<iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    p[0]=1;
    p[1]=2;
    p[2]=4;
    p[3]=9;
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<p[i]<<endl;
    }

    delete []p;
    //p=NULL; --> //only after deleting heap memory otherwise it will lead to memory leakage
    p=nullptr;  //16 and line 17 same purpose
    return 0;

}