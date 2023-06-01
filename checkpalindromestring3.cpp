#include<iostream>
//#include<string.h>
using namespace std;
int main()
{
    string str,rev;
    cout<<"Enter a string : \n";
    cin>>str;
    int length = (int)str.length();//typecasted kyunki according to diff compiler in general length long int hota h
    //size of new string rev should be equal to string size or length
    rev.resize(length);
    for(int i=0,j=length-1;i<length;i++,j--)
    {
        rev[i]=str[j];//copying reverse of string in other string
    }
    rev[length]='\0';
    cout<<"This "<<rev<<" is a reversible string from original"<<endl;
    if(str.compare(rev)==0)
    cout<<str<<" is a palindrome\n";
    else
    cout<<str<<" is not a palindrome\n";
    return 0;
}