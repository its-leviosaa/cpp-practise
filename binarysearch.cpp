//we can proceed by taking input of array elements ourselves also but remember that elemnts should be sorted
#include<iostream>
using namespace std;
int main()
{
    int A[10]={6,8,13,17,20,22,25,28,30,35};
    int l=0,h=9,key;
    cout<<"Enter key you want to find in array:\n";
    cin>>key;
    if(key<A[l] || key>A[h])
    {
    cout<<"key not found";
    return 0;
    }
    else
    {
    while(l<=h)//kyunki kitna baar karna h ye nhi pata h isiliye use wwhile loop
    {
      int mid=(l+h)/2;
          if(key==A[mid])
            {
               cout<<"key is in element of array at index "<<mid;
               return 0;//since we want to stop program here once this is done
            }
          else if(key > A[mid])
          {
          l=mid+1;
          //h=h;
          // mid=(l+h)/2; ye sab likhna not needed
          }
          else //if(key < A[mid])
          {
              //l=l;
              h=mid-1;
             // mid=(l+h)/2;
          }
          }
    }          
cout<<"KEY NOT FOUND";
return 0;
}