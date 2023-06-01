#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     char s[50];
     char s1[50]="Hello World";
    char *s2 = "good";
    scanf("%s",s);
    cin.getline(s,50);
    printf("%s \n");//printf ki jagah cout hoga
    printf("Length of string is %d \n",strlen(s));
    cout<<strlen(s1)<<endl;
    //cout<<"Enter s2 ";
    //cin>>s2;//naya cpp compiler mein ye input accept nahi karega isme directly string define karke length ya other operation perform
    cout<<"S2 length is "<<strlen(s);
    return 0;
}
//warning for s2
/*stringoperations.cpp:8:16: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings] 
    8 |     char *s2 = "good";
      |                ^~~~~~*/