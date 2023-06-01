#include<iostream>
using namespace std;
int main()
{
    char s1[20],s2[20];
    int length;
    cout<<"Enter a string : \n";
    cin>>s1;
    //same process we can apply for reversing string
    for(int i=0;s1[i]!='\0';i++)
    {
        length++;
    }
    for(int i =0;i<length;i++)
    {
        s2[i]=s1[length-i-1];
    }
    for(int i=0;i<length;i++)
    {
        if(s1[i]!=s2[i])
        {
            cout<<s1<<" is not a PALINDROME STRING.";
            //break;
            return 0;
        }
    }
    cout<<s1<<" is a PALINDROME STRING."; 
    return 0;
}