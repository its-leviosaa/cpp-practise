#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter number of elements : \n";
    cin>>size;
    int *p = new int[size];
  
    for(int i = 0; i<size ; i++)
    {
        cout<<"Enter "<<i<<"th index element : \n";
        cin>>p[i];
    }
    cout<<"Your required array is p = {";
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
   cout<<"}\n";
   cout<<"Size of your array is "<<sizeof(p)<<endl;
   delete []p;
   //try to change size of an array when it is created in heap 
   cout<<"Enter new number of elements : \n";
   cin>>size;
   p=new int[size];
   for(int i = 0; i<size ; i++)
    {
        cout<<"Enter "<<i<<"th index element : \n";
        cin>>p[i];
    }
    cout<<"Your required array is p = {";
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
   cout<<"}\n";
   cout<<"Size of your array is "<<sizeof(p)<<endl;
   //we will not get same value of memory size here
   return 0;
}