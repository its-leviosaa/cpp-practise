#include<iostream>
using namespace std;
int main()
{
    int i,n;
    do
    {
        cout<<i<<" hello\n";
        i++;
    }while(i<=10);
    return 0;
}

//minimum once do while loop will operate although condition is wrong  which is not true for while loop

#include<iostream>
using namespace std;
int main()
{
    int i=11,n;
    do
    {
        cout<<i<<" hello\n";
        i++;
    }while(i<=10);
    return 0;
}