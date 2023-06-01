#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Hello";
    char s2[20]="Hello";
    char s3[20]="hello";
    char s4[20]="Hello";
    char s5[20]="minor";
    char s6[20]="elder";
    cout<<strcmp(s1,s2)<<endl;
    cout<<strcmp(s4,s3)<<endl;
    cout<<strcmp(s5,s6)<<endl;
    return 0;
}