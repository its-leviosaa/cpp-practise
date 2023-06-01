#include<iostream>
using namespace std;
int main()
{
    int day_no;
    cout<<"Enter a day number :"<<endl;
    cin>>day_no;
    if (day_no==1)
    {
        cout<<"SUNDAY";
    }
    else if (day_no==1)
    {
        cout<<"MONDAY";
    }
    else if (day_no==2)
    {
        cout<<"TUESDAY";
    }
    else if (day_no==3)
    {
        cout<<"WEDNESDAY";
    }
    else if (day_no==4)
    {
        cout<<"THURSDAY";
    }
    else if (day_no==5)
    {
        cout<<"FRIDAY";
    }
    else if (day_no==6)
    {
        cout<<"SATURDAY";
    }
    else
    {
        cout<<"INVALID DAY NUMBER";
    }
    return 0;
}

//same program for month
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number";
    cin>>number;
    if(number==1)
    cout<<"jan";
    else if(number==2)
    cout<<"feb";
    else if(number==3)
    cout<<"mar";
    else if(number==4)
    cout<<"apr";
    else if(number==5)
    cout<<"may";
    else if(number==6)
    cout<<"jun";
    else if(number==7)
    cout<<"jul";
    else if(number==8)
    cout<<"aug";
    else if(number==9)
    cout<<"sep";
    else if(number==10)
    cout<<"oct";
    else if(number==11)
    cout<<"nov";
    else if(number==12)
    cout<<"dec";
    else
    cout<<"invalid number";
    return 0;
    
}