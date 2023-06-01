#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        //cout<<i<<" ";
        //cout<<"*"<<" ";
        //cout<<"@ ";

        for(int j = 1; j<=n; j++)
        {
            //cout<<j<<" ";
            cout<<"("<<i<<","<<j<<")  ";
        }
        cout<<endl;
    }
    return 0;
}