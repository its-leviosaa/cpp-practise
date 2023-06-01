#include<iostream>
using namespace std;
int main()
{
    int n,j;
    cout<<"Enter a number : \n";
    cin>>n;
    while (n!=0)
    {
        j=n%10;
        n=n/10;
        cout<<j<<"\n";
    }
    return 0;
}
//if we will remove \n or endl fom 12 line number will get reverse and get printed