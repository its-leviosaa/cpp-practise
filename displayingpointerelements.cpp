#include<iostream>
using namespace std;
int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    cout<<"Initial address where pointer is pointing "<<p<<endl;
    for (int i = 0; i < 6; i++)
     {
    //     cout<<"first method "<<A[i]<<endl;       |||
    //     cout<<"second method "<<p[i]<<endl;|||
    //     cout<<"third method "<<i[A]<<endl;|||
    //     cout<<"forth method "<<*(A+i)<<endl;|||--------->>all these means same
    //     cout<<"five method "<<*(p+i)<<endl;|||
    //     cout<<"six method "<<(A+i)<<endl;|||
    //     cout<<"seven method "<<(p+i)<<endl;|||
        cout<<*p<<endl;
        p++;
    }
    cout<<"Final address where pointer is pointing "<<p<<endl;
    return 0;
}