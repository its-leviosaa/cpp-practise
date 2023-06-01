#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    // char s1[28],s2;
    // cout<<"Enter s1 \n";
    // cin>>s1;
    // cout<<"Enter s2 \n";
    // cin>>s2;
    //first function-->run it's working ek character daalo last ka poora milega
    // if (strchr(s1,s2)!=NULL)
    // {
    //     cout<<strchr(s1,s2);
    // }

    //second function
    // if (strrchr(s1,s2)!=NULL)
    // {
    //     cout<<strrchr(s1,s2);
    // }
    
    // else
    // cout<<"NOT FOUND";

    //thirdfunction
    char s1[20]="Programming";
    cout<<strchr(s1,'o')<<endl;
    cout<<strrchr(s1,'o');
    return 0;
}