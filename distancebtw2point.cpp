//Write an expression for finding distance between two points Point1 x1,y1  point2 x2,y2
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int X1,Y1,X2,Y2;
    double distance;
    cout<<"Enter the points between which you want to calculate distance : "<<endl;
    cin>>X1>>Y1>>X2>>Y2;
    distance=(double)(sqrt((pow((X2-X1),2))+(pow((Y2-Y1),2))));
    cout<<"Distance between the points is "<<distance;
    return 0;
}
// we need to space out digits >> iske pehle jitne bhi rahenge agar bina space ke likhe toh unko ek maan lega poora