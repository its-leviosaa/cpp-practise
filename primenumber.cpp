#include<iostream>
using namespace std;
int main()
{
    int j,n;
    cout<<"Enter a value for n \n";
    cin>>n;
    if (n==2)
    {
        cout<<"PRIME NUMBER";
    }
    
    for(int i=2; i<n;i++)
    {
        j=n%i;
        if (j==0)
        {
            cout<<"NOT A PRIME NUMBER";
        }
        break;
    }
    if (j!=0)
    {
        cout<<"PRIME NUMBER";
    }
    
}
//second method related to counting factors because we know prime numbers has 2 factor 1 and itself
#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter a value for n \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int j=n%i;
        if (j==0)
        {
            count++;
        }
        
    }
    if (count==2)
    {
        cout<<n<<" is a prime number";
    }
    else //if(count<=2)
    {
        cout<<n<<" is not a prime number";
    }
    return 0;
}