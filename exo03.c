#include <stdio.h>

int main()
{
	float a, b;
	double c;
	printf("Enter two values: ");
	scanf("%f%f", &a, &b);
	c=a*b;
	printf("The product of %.1f and %.1lf = %.3f\n", a, b, c);
	return(0);
}

