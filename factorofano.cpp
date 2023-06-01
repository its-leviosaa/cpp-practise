//my code
#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter a value for n :\n";
    cin>>n;
    while(i<=n)
    {
        int j = n%i;
        cout<<n<<" % "<<i<<" is "<<j<<endl;
        if (j==0)
        {
            cout<<i<<" is a factor of "<<n<<"\n";
        }
        i++;
    }
    return 0;
}
//teacher solution
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter a value for n :\n";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        int j = n%i;
        if (j==0)
        {
          cout<<i<<" is a factor of "<<n<<"\n";   
        }
        
    }
    return 0;
}    