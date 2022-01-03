#include <stdio.h>
#include <math.h>

int main()
{
	float volume;
	int cans;
	printf("Entre the volume of your citern (in liters): ");
	scanf("%f", &volume);

	// How many cans of 33cl 
	
	//1 liter = 100cl
	
	cans=floor((int)volume/0.33);

	printf("Your citern can fill %d cans of soda.\n", cans);
	return(0);
}
