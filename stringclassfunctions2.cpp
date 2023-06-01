#include<iostream>
#include<string>
using namespace std;
int main()
{
    //string str = "HELLO";
    // cout<<str.size()<<endl;
    // cout<<str.capacity()<<endl;
    // str.append(" WORLD");
    // cout<<str<<endl;
    // cout<<str.capacity()<<endl;
    // cout<<str.size()<<endl;
    // str.append(" Currently WORLD IS NOT A VERY GOOD PLACE.\nBut you can try to be good regardless of people's behaviour \n");
    // cout<<str<<endl;
    // cout<<str.capacity()<<endl;//->capacity of array will be automatically increased
    // cout<<str.size()<<endl;

    //next function
    // str.insert(3,"P PLEASE");
    // cout<<str<<endl;
    // str.clear();
    // cout<<str<<endl;
    // string str1 = "HELLO";
    // str1.insert(3,"P PLEASEJII",8);
    // cout<<str1<<endl;

    //next function
    // string str = "programming";
    // str.replace(3,4,"kk");
    // cout<<str<<endl;
    // str.replace(3,6,"k"); //-->ab ye result naya string pe lagega
    // cout<<str<<endl;

    //nextfunction
    // string str = "programming";
    // //str.erase();-->clear string
    // str.push_back('G');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str;

    //next function
    // string str1 = "programming";
    // string str2 = "language";
    // str1.swap(str2);
    // cout<<str1<<endl<<str2;

    //next function
    // string str1 = "programming";
    // char str[20];
    // // str1.copy(str,str1.length());
    // str1.copy(str,3);//-->in most cases garbage value is printed so do the below step as precaution
    // str[3]='\0'; //-->this step so that no garbage value is printed
    // cout<<str<<endl;

    //next function
    // string str1 = "programming is not that tough";
    // cout<<str1.find("tough")<<endl;
    // cout<<str1.rfind("tough")<<endl;
    // cout<<str1.rfind('h')<<endl;//-->ye picche se check karna start kiya toh pichhe se 28 index waala h pehle aaya toh wo output ho gaya
    // cout<<str1.find('h')<<endl;
    // cout<<str1.find("are")<<endl; 

    //next function
    string str1 = "programming is not that tough";
    cout<<str1.find_first_of("tk")<<endl;
    cout<<str1.find_first_of('p')<<endl;
    cout<<str1.find_last_of("tk")<<endl;
    cout<<str1.find_first_of("tk",18)<<endl;
    cout<<str1.find_last_of('o')<<endl;
    return 0;
}