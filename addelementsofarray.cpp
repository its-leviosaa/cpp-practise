#include<iostream>
using namespace std;
int main()
{
    int n=7, sum=0;
    int A[7]={4,5,6,7,1,8,3};
    for(int i = 0; i<7 ; i++)
    {
        cout<<A[i]<<endl;
        int x = A[i];
        sum=sum+x;
        cout<<sum<<endl;
    }
    cout<<"The sum of elements of given array is "<<sum;
    return 0;
}