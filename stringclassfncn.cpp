#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Good";
    // cout<<str<<endl;
    // cout<<str.capacity()<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // cout<<str.capacity()<<endl;
    // cout<<str.max_size()<<endl;
    // str.resize(40);
    // cout<<str.size()<<endl;
    // cout<<str.capacity()<<endl;
    // str.clear();
    // cout<<str.size()<<endl;
    // cout<<str.capacity()<<endl;
    // cout<<str.empty();    //iska output 1 aaya matlab sach mein string empty h ye true
    //cout<<str;
    // str=nullptr;  -->iska output kuch nahi aayega kyunki ye string mein null assign 
    // cout<<str.length();
    str.resize(4);
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
}