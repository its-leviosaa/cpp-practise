#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter a value for n \n";
    cin>>n;
    for(i=1;i<n;i++)
    {
        int j=n%i;
        if (j==0)
        {
            cout<<i<<" is a factor of "<<n<<"\n";
            sum=sum+i;
            cout<<sum<<endl;
        }
        
    }
    cout<<"Sum of factors of "<<n<<" is "<<sum<<endl;
    if (sum==n)
    {
        cout<<n<<" is a perfect number";
    }
    else //if(sum!=n)
    {
        cout<<n<<" is not a perfect number";
    }
    return 0;
}