#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str1;
    
    // cin>>str;  //-->only one word print
    // cout<<"Enter str \n";
    // getline(cin,str);   //-->for multiple words
    // cout<<"Enter str1 \n";
    // getline(cin,str1);
    // cout<<str<<endl<<str1;

    //second method

    // cin>>str;
    // cin>>str;
    // cout<<str;

    //third method
    getline(cin,str1);
    getline(cin,str);
    cout<<str<<endl<<str1;
    return 0;
}