#include <iostream>
using namespace std;

int main()
{
    int index = 0;
    while (index <= 20)
    {
        cout << "We are at index number " << index << endl; // agar hum index ko double colon ke andar rakhenge toh wo print hoga as it is
        index = index + 1;
    }
}