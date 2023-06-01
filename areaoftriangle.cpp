#include<iostream>
using namespace std;
int main()
{
    int base, height;
    float area;
    cout<<"Enter the value for base and height respectively :"<<endl;
    cin>>base>>height;
    area=(float)(base*height)/2;    //typecasting 
    cout<<"The area of triangle is "<<area;
    return 0;
}