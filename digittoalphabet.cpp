#include <iostream>  
using namespace std;  
int main()  
{  
int n,reverse=0,remainder;    
cout<<"Enter the Number= ";    
cin>>n;    
while(n>0)    
{    
remainder=n%10;    
reverse=reverse*10+remainder;    
n=n/10;    
}    
n=reverse;    
while(n>0)    
{    
remainder=n%10;    
switch(remainder)    
{    
case 1:    
cout<<"one ";    
break;    
case 2:    
cout<<"two ";    
break;    
case 3:    
cout<<"three ";  
break;    
case 4:    
cout<<"four ";  
break;    
case 5:    
cout<<"five ";  
break;    
case 6:    
cout<<"six ";   
break;    
case 7:  
cout<<"seven ";  
break;  
case 8:    
cout<<"eight ";    
break;    
case 9:    
cout<<"nine ";  
break;    
case 0:    
cout<<"zero ";  
break;    
default:    
cout<<"tttt ";    
break;    
}    
n=n/10;    
}
return 0;    
}  