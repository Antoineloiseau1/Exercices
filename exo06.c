#include <stdio.h>

int main()
{
	char letter;

	printf("Please enter a letter between 'a' and 'y': " );
	scanf("%c", &letter);
	printf("The letter that follows %c is %c.\n", letter, letter++);
	return(0);
}
