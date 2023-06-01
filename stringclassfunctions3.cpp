#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "programming";
    // cout<<str.substr(3)<<endl;
    // cout<<str.substr(0,3)<<endl;
    // string str1=str.substr(0,3);

    // cout<<str.compare(str1)<<endl;
    // cout<<str1.compare(str1)<<endl;
    // cout<<str1.compare(str)<<endl;

    // cout<<str.at(3)<<endl;
    // cout<<str[4]<<endl;

    // string str1 = "pro";
    // string str2 = " language";
    // cout<<str1+str<<endl;
    // str1=str2;
    // cout<<str1<<endl;
    // cout<<str+str1<<endl;

    // str.at(8)='e';
    // str.at(9)='r';
    // //str.at(10)='\0';--->same use as below
    // str[10]='\0';
    // cout<<str;

    str=str + " language is very important.\nFor CS and IT student it is in their syllabus";
    cout<<str;
    return 0;
}