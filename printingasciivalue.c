// C program to print
// ASCII Value of Character
#include <stdio.h>
int main()
{
	char c;

	// %d displays the integer value of a character
	// %c displays the actual character
    printf("Enter any character \n");
    scanf("%c",&c);
	printf("The ASCII value of %c is %d", c, c);
	return 0;
}
