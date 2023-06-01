#include<iostream>
using namespace std;
int main()
{
    float amount;
    float discount;
    cout<<"Enter amount :";
    cin>>amount;
    if (amount>=5000)
    {
        discount=20/100.0*amount;
        cout<<"Discount is "<<discount; //if we will do 20/100 then answer will be zero because int by int gives int as discount hence be careful take one as float
    }
    else if (2000<=amount<5000)
    {
        discount=10/100.0*amount;
        cout<<"Discount is "<<discount;
    }
    else
    {
        discount=5/100.0*amount;
        cout<<"Discount  is "<<discount;
    }
    return 0;
}