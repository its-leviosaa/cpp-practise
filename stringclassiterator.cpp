#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string str = "today";
    // string::iterator itloop;

    // for(itloop=str.begin();itloop!=str.end();itloop++)
    // {
    //     cout<<*itloop<<endl;
    // }

    //reverse loop

    // string::reverse_iterator itg;
    // cout<<"Reverse printing of today is \n";
    // for(itg=str.rbegin();itg!=str.rend();itg++)
    // {
    //     cout<<*itg<<endl;
    // }

    //printing uppercase
    // for(itloop=str.begin();itloop!=str.end();itloop++)
    // {
    //     *itloop=*itloop-32;
    // }
    // cout<<str;

    //accessing letter and printing string length
    int i,count=0;
    string s;
    cout<<"Enter string \n";
    //cin>>s; -->read only input before space
    getline(cin,s);
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        count++;
    }
    cout<<"Length of string is "<<count;
    return 0;
}