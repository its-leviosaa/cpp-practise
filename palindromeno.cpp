#include<iostream>
using namespace std;
int main()
{
    int n,j,reverse=0;
    cout<<"Enter a number : \n";
    cin>>n;
    int m= n;
    while (n!=0)
    {
        j=n%10;
        n=n/10;
        reverse=reverse*10+j;
    }
    cout<<"Reverse of given number is "<<reverse<<"\n";
    if (reverse==m)
    {
        cout<<"Palindrome number";
    }
    else
    {
        cout<<"Not a palindrome number"; 
    }
    return 0;
}
//if we will remove \n or endl fom 12 line number will get reverse and get printed