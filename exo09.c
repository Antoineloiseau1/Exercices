#include <stdio.h>
#include <math.h>

int main()
{
	printf("Enter a value, we will give you its two perfect square: ");
	double real;
	int a, b;
	scanf("%lf", &real);

	a=(int)floor(sqrt(real));
	a*=a;
	b=(int)ceil(sqrt(real));
	b*=b;

	printf("The two perfects square of %.1lf are: %d and %d\n", real, a, b);
	return(0);
}


