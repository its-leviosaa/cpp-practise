//printing elements of array  
#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,3,4,1,9};//initialisation of an array
    int B[5]={6,7};//rest 3 values will be printed as zero zero zero
    int C[ ]={9,8,7};
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<A[i]<<endl;
        cout<<B[i]<<endl;
        cout<<C[i]<<endl;
    }
 return 0;
} 
//for each loop
#include<iostream>
using namespace std;
int main()
{
    //int D[ ]={2,2,9,8};
    //int E[3]={1,2};
    float F[4]={5.6f,6.9f,7.3f};
    char G[6]={'A',66,'B','C','D'};//CHAR HAI ISILIYE INTEGER(0) PRINT NHI HUA H aur 66 ki jagah B print hoga kyunki 66 uska ascii code h
    for(/*int*/ float x : F)
    {
        //cout<<D[i]<<endl;
        //cout<<E[i]<<endl;
        cout<<x<<endl;
    }
    for( auto y : G)
     cout<<y<<endl;
    for( int y : G)//int type mein output maange toh ascii value aa gaya char ka print hoke
     cout<<y<<endl;
    

 return 0;
} 

