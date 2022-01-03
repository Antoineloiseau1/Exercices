#include <stdio.h>

int main()
{
	int number; 

	printf("Please enter an integer: ");
	scanf("%d", &number);

	//check if number is even or odd

	if(number%2==0)
		printf("%d is even\n", number);
	else
		printf("%d is odd\n", number);
	return(0);
}
		
	

