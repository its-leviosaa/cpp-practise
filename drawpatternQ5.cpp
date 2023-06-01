// #include<iostream>
// using namespace std;
// int main()
// {
// int n,i,j,l=5;
// // cout<<"Give the Number N of Stars ";
// // cin>>n;
// for(i=1; i<=3; i++)//i<=n
// {    
//     for(j=1;j<=i-1;j++)
//         cout<<" ";
//      for(j=1;j<=6-i;j++,i++)//j<=n-i+1
//         cout<<"*";
//      cout<<"\n";
// }
// return 0;
// }
#include<iostream>
using namespace std;
int main()
{
int i,j,l=5;
//cout<<"Give the Number N of Stars ";
//cin>>n;
for(i=1; i<=3; i++)
{    
    for(j=1;j<=i-1;j++)
    {
        cout<<" ";
    }
     for(j=1;j<=l;j++)
     {
        cout<<"*";
     }
     l-=2;
     cout<<"\n";
}

return 0;
}