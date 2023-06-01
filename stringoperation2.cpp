#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[10],s2[20],s3[10]="";
    cout<<"Enter s1 \n";
    cin>>s1;
    cout<<"Enter s2 \n";
    cin>>s2;
    strcat(s1,s2);
    cout<<s1<<endl;
    //second function for copying content
    strncat(s1,s2,2);
    cout<<s1<<endl;
    strcpy(s3,s1);
    cout<<s3<<endl;
    strncpy(s3,s1,2);
    cout<<s3;
    return 0;
}