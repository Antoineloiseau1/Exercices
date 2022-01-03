#include <stdio.h>

void checkIntFloat(float number);

int main()
{
	float x;
	printf("Please enter a number: ");
	scanf("%f", &x);
	checkIntFloat(x);
	return(0);
}

void checkIntFloat(float number)
{
	if(number==(int)number)
		printf("%.0f is an int\n", number);
	else
		printf("%.2f is a float\n", number);
	return;
}


