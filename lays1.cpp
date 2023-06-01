//program to find the sum of squares for n digit
#include<iostream>
using namespace std;
int main()
{
    int n,i,b,sum=0;
    cout<<"Enter a value of n"<<endl;
    cin>>n;
    for (i = 0; i <= n; i++)
    {
        b=i*i;
        sum=sum+b;
    }
    cout<<"The sum of squares of number is "<<sum;
    return 0;
}


//method 2.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a value of n"<<endl;
    cin>>n;
    sum=(n*(n+1)*((2*n)+1))/6;
    cout<<"The sum of squares of number is "<<sum;
    return 0;

}
