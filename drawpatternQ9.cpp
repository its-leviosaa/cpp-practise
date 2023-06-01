#include<iostream>
using namespace std;

int main()
{
    
    for(int i = 1 ; i <= 5 ; i++)
    {
      for(int j = 1 ; j <= 5-i+1 ; j++)//j=5-i mein 5 se print hona nhi start isiliye 5-i+1 likhe
      {
          cout<<"*"<<" ";
      }
      cout<<"\n";
    }
}