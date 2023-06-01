#include<iostream>
using namespace std;
int main()
{
int n,m,sum=0;
cout<<"Enter a three digit number : \n";
cin>>n;
m=n;
while (n!=0)
{
    int j = n % 10;
    n = n/10;
    sum = sum + j*j*j;
}
cout<<"sum of cube of digits is "<<sum<<"\n";
if (sum==m)
cout<<"Armstrong number ";
else
cout<<"Not an Armstrong number";
return 0;
}
