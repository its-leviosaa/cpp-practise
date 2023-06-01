#include<iostream>
using namespace std;
typedef int factorial;
int main()
{
 int n;
 factorial f=1;
 cout<<"Enter a value for n : \n";
 cin>>n;
 if(n==0)
 {
    cout<<"factorial of zero is 1";
 }
 else if(n!=0)
 {
    for(int i=1;i<=n;i++)
    {
        f*=i;     //f=f*i compound assignment statement
        cout<<f<<endl;
    }
    cout<<"Factorial of "<<n<<" is "<<f;
 }
 return 0;
}