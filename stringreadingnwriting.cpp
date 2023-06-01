#include<iostream>
using namespace std;
int main()
{
    char s[50];
    char q[500];
    cout<<"Enter your full name : \n";
    //cin>>s;                 -->WON'T PRINT FULL NAME
    cin.get(s,50);          //-->PRINT FULL NAME
    cout<<"Your full name is "<<s<<endl;
    cin.ignore();          //-->this function is use to print character in next string
    cout<<"Write about yourself : \n";
    cin.get(q,500);
    cout<<q;
    return 0;
}
//printing to string without using cin.ignore function anf by using cin.getline function
#include<iostream>
using namespace std;
int main()
{
    char s[50];
    char q[500];
    cout<<"Enter your full name : \n";
    //cin>>s;                 -->WON'T PRINT FULL NAME
    cin.getline(s,50);          //-->PRINT FULL NAME
    cout<<"Your full name is "<<s<<endl;
    cout<<"Write about yourself : \n";
    cin.getline(q,500);
    cout<<q;
    return 0;
}