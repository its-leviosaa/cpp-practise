//find sum of series 1-2+3-4+5-6+7+....
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,result=0;
    cout<<"Enter a value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }
        else
        sum=sum+i;
    }
    result=sum;
    cout<<"The result of the above series is "<<result;
    return 0;
}
