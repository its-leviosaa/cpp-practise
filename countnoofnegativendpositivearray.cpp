#include<iostream>
using namespace std;
int main()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;
    int n=12;
    for(int i=0;i<n; i++)
    {
        //cout<<A[i]<<endl;
        if (A[i]<0)
        {
            ncount++;
            //cout<<ncount<<endl;
        }
        else
        {
            pcount++;
            //cout<<pcount<<endl;
        }
        
    }
    cout<<"The number of negative number in given array is "<<ncount<<endl;
    cout<<"The number of positive number in given array is "<<pcount;
    return 0;

}