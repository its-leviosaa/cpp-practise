#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the numbers of elements : "<<"\n";
    cin>>n;
    float A[5],sum=0.0,average;
    for(i=0;i<5;i++){
        cout<<"Enter array elements : \n";
        cin>>A[i];
        //cout<<"Array elements are : "<<A[i]<<" ";
        sum+=A[i];
    }
    cout<<"sum is "<<sum;
    average=sum/n;
    cout<<"average is "<<average;
}