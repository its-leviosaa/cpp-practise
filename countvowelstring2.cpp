#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int length_string,space=0,vowel=0,consonant=0;
    char a,e,i,o,u;
    char s[100];
    cout<<"Enter a string : \n";
    cin.getline(s,100);
    length_string=strlen(s);
    cout<<"Length of string is "<<length_string<<endl;
    for(int i = 0; i <= length_string; i++)
    {
        if(s[i]=='a')
        {
            cout<<i<<"th element of string is vowel \n";
            vowel++;
        }
        else if(s[i]=='e')
        {
            cout<<i<<"th element of string is "<<s[i]<<" is vowel \n";
            vowel++;
        }
        else if(s[i]=='i')
        {
            cout<<i<<"th element of string is "<<s[i]<<" is vowel \n";
            vowel++;
        }
        else if(s[i]=='o')
        {
            cout<<i<<"th element of string is "<<s[i]<<" is vowel \n";
            vowel++;
        }
        else if(s[i]=='u')
        {
            cout<<i<<"th element of string is "<<s[i]<<" is vowel \n";
            vowel++;
        }
        else if(s[i]==' ')
        {
            space++;
        }
        else
        {
            consonant++;
        }
    }
    cout<<"Number of words in string is "<<space+1<<endl;
    cout<<"Number of vowels in string is "<<vowel<<endl;
    cout<<"Number of consonants in string is "<<consonant<<endl;
    return 0;
}