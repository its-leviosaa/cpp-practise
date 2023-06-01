#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter number of elements : \n";
    cin>>size;
    int A[size];
  
    
    for(int i = 0; i<size ; i++)
    {
        cout<<"Enter "<<i<<"th index element : \n";
        cin>>A[i];
    }
    cout<<"Your required array is A = {";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
   cout<<"}\n";
   cout<<"Size of your array is "<<sizeof(A)<<endl;
   //try to change size of an array when it is created in stack 
   size=71;
   cout<<"Size of your new array is "<<sizeof(A);
   //we will get same value in line 25 as we get in line 22
   return 0;
}