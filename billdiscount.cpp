#include<iostream>
using namespace std;
typedef float billAmount;
typedef float discountedAmount;

int main()
{
  float discount;
  billAmount bA;
  discountedAmount dA;
  cout<<"Enter bA :"<<endl;
  cin>>bA;
  if (bA<100)
  {
    cout<<"NO DISCOUNT";
    discount=0;
    dA=bA-discount;
    cout<<"Discounted Amount is "<<dA;
  }
  else if (bA>=100 && bA<500) //we cannot write this in 100=<bA<500
  {
    discount=10/100.0*bA;
    cout<<discount<<" ruppees discount"<<endl;
    dA=bA-discount;
    cout<<"Discounted Amount is "<<dA;
  }
  else
  {
  discount=20/100.0*bA;
  cout<<discount<<" ruppees discount"<<endl;
  dA=bA-discount;
  cout<<"Discounted Amount is "<<dA;
  }
  return 0;

}