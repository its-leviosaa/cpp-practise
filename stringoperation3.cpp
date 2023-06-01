// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     char s1[20]="PROGRAMMING";
//     char s2[10]="GRAM";
//     char s3[10]="M";
//     char s4[10]="k";
//     cout<<strstr(s1,s2)<<endl;
//     cout<<strstr(s1,s3)<<endl;
//     cout<<strstr(s1,s4)<<endl;
//     return 0;
// }

//another code
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[28],s2[25];
    cout<<"Enter s1 \n";
    cin>>s1;
    cout<<"Enter s2 \n";
    cin>>s2;
    if (strstr(s1,s2)!=NULL)
    {
        cout<<strstr(s1,s2);
    }
    else
    cout<<"NOT FOUND";
    return 0;
}