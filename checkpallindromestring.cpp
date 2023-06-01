#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20];
    cout<<"Enter a string : \n";
    cin>>s1;
    // Start from leftmost and
	// rightmost corners of str
	int l = 0;
	int h = strlen(s1) - 1;

	// Keep comparing characters
	// while they are same
	while (h > l) {
		if (s1[l++] != s1[h--]) {
			printf("%s is not a palindrome\n", s1);
			return 0;
			// will return from here
		}
	}

	printf("%s is a palindrome\n",s1);

	return 0;
}