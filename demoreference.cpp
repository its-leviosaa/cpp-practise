#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;
    //int b = 20;
    //int &y = b;-->showing error as redeclaration of y
    x++;
    y++;
    cout<<"X value is : "<<x<<" and Y value is "<<y<<endl;
    cout<<"X address is : "<<&x<<" and Y address is "<<&y;
    return 0;
}