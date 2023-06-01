#include<iostream>
using namespace std;
int main()
{
    int key,n=10;
    int A[10]; //we are not initialising  this array 
    cout<<"Enter any number you want to be as elements in array : \n";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        //cout<<A[i]<<endl;-->2 baar dikh raha toh confusion increase ek baar hi rehne do
    }
    cout<<"Enter key \n";
    cin>>key;
    //now operation for linear search
    for(int i = 0; i<n; i++)
    {
        if (key==A[i])
        {
            cout<<"Key is found at index "<<i;
            return 0;
        }
        
    }
    cout<<"key doesn't belong to given array";
    return 0;
}