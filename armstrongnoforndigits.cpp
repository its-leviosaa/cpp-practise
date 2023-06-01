#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,j,m,sum=0,count=0,result_after_power;
    cout<<"Enter a n digit number : \n";
    cin>>n;
    m=n;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<"Digits in this number is "<<count<<"\n";
    while (m!=0)
    {
        j=m%10;
        m=m/10;
        result_after_power=round(pow(j,count));
        cout<<j<<" to the power "<<count<<" is "<<result_after_power<<"\n";
        sum+=result_after_power;
    }
    cout<<"The sum of digits of number "<<m<<" raised to the power "<<count<<" is "<<sum<<"\n";
    if (sum==m)
    cout<<"Armstrong number ";
    else
    cout<<"Not an Armstrong number";

    return 0;
}
