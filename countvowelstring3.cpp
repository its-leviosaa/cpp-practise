#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int length_string,consonant=0,vowel=0,space=0;
    char a,e,i,o,u;
    char s[100];
    cout<<"Enter a string : \n";
    cin.getline(s,100);
    length_string=strlen(s);
    cout<<"String length is "<<length_string<<endl;
    for(int i = 0; i < length_string; i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='O' ||s[i]=='U' ||s[i]=='I')
        {
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