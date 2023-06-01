#include<iostream>
using namespace std;
int main()
{
    int n1,n2,GCD;
    cout<<"Enter two numbers : \n";
    cin>>n1>>n2;
    for(int i= 1; i<=n1 && i<=n2; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
           GCD=i;
        }
        
    }
    cout<<"GCD OF "<<n1<<" and "<<n2<<" is "<<GCD;
}


//second method is by subtracting continuously
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter two numbers : \n";
    cin>>m>>n;
    int a = m;//since m and n will be decreasing in further procedure toh we r storing numbers to use in next step after applying loops
    int b = n;//since m and n will be decreasing in further procedure toh we r storing numbers to use in next step after applying loops
    while (m!=n)
    {
        if(m>n)
        m=m-n;
        else if(n>m)
        n=n-m;
    }
    cout<<m<<" is GCD of "<<a<<" and "<<b;
    return 0;
}
