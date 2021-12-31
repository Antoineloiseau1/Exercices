#include <stdio.h>

int main()
{
	int a, b, temp;

	printf("Enter two values: ");
	scanf("%d%d", &a, &b);

	printf("You entered %d and %d\n", a, b);
	puts("***Swapping the values***");

	temp=a;
	a=b;
	b=temp;

	printf("%d and %d have been swapped.\n", a, b);
	return(0);
}
