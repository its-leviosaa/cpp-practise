#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f, g, sum;
    float average;
    cout<<"Enter any seven number you want to take average"<<endl;
    cin>>a>>b>>c>>d>>e>>f>>g;
    sum = a+b+c+d+e+f+g;
    average = sum/7;
    cout<<"The average of 7 numbers is "<<average;
    return 0;
}