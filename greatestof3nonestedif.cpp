#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter any three numbers"<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {
        if(b>c)
        {
            cout<<a<<"is greater than "<<b<<" and "<<c;
        }
        else if (b<c)
        {
            if (a>c)
            {
              cout<<a<<"is greater than "<<b<<" and "<<c;;  
            }
            else
            cout<<c<<"is greatest";
        }
        
    }
     else if (b>a)
    {
        if(a>c)
        {
            cout<<b<<"is greater than "<<a<<" and "<<c;
        }
        else if (a<c)
        {
            if (b>c)
            {
              cout<<b<<"is greater than "<<a<<" and "<<c;;  
            }
            else
            cout<<c<<"is greatest";
        }
        
    }
    
    
}