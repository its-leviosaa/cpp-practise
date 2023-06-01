#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c;
    float root1, root2;
    cout<<"Enter the coefficient of quadratic equation: "<<endl;
    cin>>a>>b>>c;
    root1=(float)(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(float)(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots for the given coefficient of equation are : "<<root1<< " and "<<root2;
    return 0;
}

//nan means not a number i.e imaginary roots

//finding nature of roots
#include<iostream>
#include<math.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float D, root1, root2;
    root1=(float)(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(float)(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Enter the coefficient of quadratic equation: "<<endl;
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if (D>=0)
    {
        if (D=0)
        {
            cout<<"Roots are real and equal"<<endl;
            cout<<"They are "<<b/(2*a)<<-b*(2*a);
        }
        else
        {
            cout<<"Roots are real and unequal"<<endl;
            cout<<"They are "<<root1<<" & "<<root2;
        }
        
    }
    else if (D<0)
    {
       cout<<"Roots are imaginary"<<endl; 
    }
    return 0;
}
    
    
    