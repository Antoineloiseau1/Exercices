#include <stdio.h>

int main()
{
	int a, b;
	float decEquiv;
	printf("Enter a fraction of two number: ");
	scanf("%d/%d", &a, &b);

	decEquiv=(float)a/(float)b;

	printf("The decimal equivalent of %d/%d is %.4f\n", a, b, decEquiv);
	return(0);
}





