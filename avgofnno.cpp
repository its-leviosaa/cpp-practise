#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    float average;
    cout<<"Enter any number you want to take average"<<endl;
    cin>>n;
    for (i = 0; i <= n; i++)
    {
        sum=sum+i;
    }
    average=sum/n;
    cout<<"The average of "<<n<<" numbers is "<<average;
}