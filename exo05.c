#include <stdio.h>

int main()
{
	printf("Please enter three values: ");
	int a, b, c;
	float mean;
	scanf("%d%d%d", &a, &b, &c);
	mean=(float)(a+b+c)/3;
	printf("The mean of %d, %d and %d is %.2f\n", a, b, c, mean);
	return(0);
}
