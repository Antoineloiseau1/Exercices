#include <stdio.h>
#include <string.h>


int main()
{	
	char input[4];
	char swap;

	printf("Please enter a 3 digits number: ");
	scanf("%4s", input);
	if(strlen(input)>3)
	{
		printf("Please enter a 3 digits number");
	}
	else
	printf("Your entered %s\n", input);

	swap=input[0];
	input[0]=input[2];
	input[2]=swap;
	
	printf("Then reversed: %s", input);
	putchar('\n');
 	return(0);
}

	
