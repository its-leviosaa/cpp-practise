#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if (age>=12 && age<=50)
    {
        cout<<"You are young";
    }
    else if (age<12)
    {
        cout<<"You are a child";
    }
    else if (age>50)
    {
        cout<<"You are old";
    }
    return 0;
    
}


//not eligible if ur age is in between 12-50
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age :"<<endl;
    cin>>age;
    if (age<=12 || age>50)
    {
        cout<<"You are eligible";
    }
    else
        cout<<"You are not eligible";
    return 0;    
}