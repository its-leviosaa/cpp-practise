#include<iostream>
using namespace std;
int main()
{
    int n=7,max=4;//instead of writting 4 writting A[0] is preferred
    int A[7]={4,8,6,9,5,2,7};
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<endl;
        if (A[i]>max)
        {
            max=A[i];
            cout<<A[i]<<endl;
        }
        
    }
cout<<"The maximum element in given array is "<<max;
return 0;
}