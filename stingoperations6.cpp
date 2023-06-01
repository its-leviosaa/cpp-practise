#include<iostream>
#include<cstring>
//#include<string.h>
using namespace std;
int main()
{
    // char s1[10]="2354";
    // char s2[10]="54.78";
    // long int x=strtol(s1,NULL,10);
    // float y=strtof(s2,NULL);
    // cout<<x<<endl<<y<<endl<<x+10<<endl;

    //tokenisation
    char s3[20]="x=10;y=20;z=35";
    //cout<<strtok(s3,"=;");
    char *token = strtok(s3,"=;");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    return 0;
}