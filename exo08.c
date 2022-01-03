#include <stdio.h>

int main()
{
	float a, b;
	printf("Enter two values: ");
	scanf("%f%f", &a, &b);

	if(a<b)
		printf("%.2f is grater than %.2f\n",b, a);
	else
		printf("%.2f is grater than %.2f\n", a, b);
	return(0);
}
