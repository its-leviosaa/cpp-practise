// C++ program to illustrate do-while loop
#include <iostream>
using namespace std;
  
int main()
{
    int i = 2; // Initialization expression
  
    do
    {
        // loop body
        cout<<"Hello World"<<endl;    
  
        // update expression
        i++;
  
    }  while (i < 1);   // test expression
  
    return 0;
}
//In the above program the test condition (i<1) evaluates to false. 
//But still as the loop is exit – controlled the loop body will execute once.