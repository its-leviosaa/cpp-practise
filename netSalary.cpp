#include<iostream>
using namespace std;
typedef float BasicSalary;
typedef float PercentageAllowance;
typedef float PercentageDeductions;

int main()
{
 float NetSalary;   
 BasicSalary bs;
 PercentageAllowance Pa;
 PercentageDeductions Pd;
 cout<<"Enter bs,Pa,Pd values :"<<endl;
 cin>>bs>>Pa>>Pd;
 NetSalary=bs+bs*Pa/100-bs*Pd/100;
 cout<<"Your salary is : "<<NetSalary;
 return 0;
}