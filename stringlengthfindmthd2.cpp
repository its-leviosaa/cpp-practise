#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,count=0;
    char s[100];
    cout<<"Enter string \n";
    cin.getline(s,100);
    for(s[0];s[i]!='\0';i++)
    {
        count++;
    }
    cout<<"Length of string is "<<count;
    return 0;
}