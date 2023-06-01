//find sum of digits of a n dgt number
//keywords are extract and reduce
#include<iostream>
using namespace std;
int main()
{
    int numb, remnd, sum=0;
    cout<<"Enter any number"<<endl;
    cin>>numb;
    while (numb != 0)
    {
        remnd = numb%10;
        sum = sum+remnd;
        numb = numb/10;
    }
    cout<<"The sum of digits of number "<<sum<<" is";

} 