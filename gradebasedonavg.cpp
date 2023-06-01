#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3;
    float avg;
    cout<<"Enter your marks :"<<endl;
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3;
    if (avg>=60)
    {
        cout<<"GRADE A";
    }
    else if (35<=avg<60)
    {
      cout<<"GRADE B";  
    }
    else 
    {
      cout<<"GRADE C";
    }
    return 0;
}