#include<iostream>
using namespace std;

int main()
{
    //int x=2;
    int x;
    cout<<"Enter any number :"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"Choice is 1";
        break;
    case 2:
        cout<<"Choice is 2";
        break;
    case 3:
        cout<<"Choice is 3";
        break;        
    
    default:
        cout<<"Choice other than 1,2 and 3";
    }
    return 0;
}


