//Age program
#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<"You are a teenager";
        break;
    case 12:
    cout<<"You are a minor";
        break;
    case 20:
    cout<<"You are 20";      
        break;
    default:
    cout<<"You are none of the above";
        break;
    }
}