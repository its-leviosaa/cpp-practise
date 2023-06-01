#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter your age"<<endl;
cin>>age;
// if (age>=18)
// {
//     cout<<"You can vote";
// }
// else if (age>=150)
// {                        Ye consider nhi hoga kyunki jaise hi first line true ho gaya computer aage padhega hi nhi
//     cout<<"INVALID AGE";  isiliye ye matt likhna
// }
 if (age>=150 ) //if (age>=150 || age<18)
{               //you can't drive aise v lik h sakte || or operator h
  cout<<"INVALID AGE";    
}
else if (age>=18)
{
    cout<<"You can vote";
}
else
{
cout<<"you can not vote";
}
return 0;
}
