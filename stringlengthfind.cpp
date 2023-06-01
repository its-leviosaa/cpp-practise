#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    char s1[100];
    cout<<"Enter first string \n";
    //cin.get(s,100);
    cin.getline(s,100);
    cout<<"Enter second string \n";
    cin.get(s1,100);
    cout<<s<<endl;
    cout<<strlen(s)<<endl;
    cout<<s1<<endl;
    cout<<strlen(s1)<<endl;
    return 0;
}