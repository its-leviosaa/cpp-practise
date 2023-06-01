#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,d;
    char s[100];
    cout<<"Enter lowercase string \n";
    cin.getline(s,100);
    d=strlen(s);
    cout<<d<<endl;
    for(i=0;i<d;i++) //instead of i<d we can write s[i]!='\0'
    {
      if(s[i]!=' ')
      {
        s[i]=s[i]-32;
      }
      else if(s[i]=' ')
      {
        continue;
      }  
    }
    cout<<s;
    return 0;
}