#include <stdio.h>

int main()
{
	float radius[2], area[2], difference;

	printf("Please enter the radius of two circles: ");
	int x=0;
	while(x<2)
	{
		scanf("%f", &radius[x]);
		area[x]=3.1415*(radius[x]*radius[x]);
		printf("the area of %.2f is %.2fm2\n", radius[x], area[x]);
		x++;
	}
	
	int y;
	x=0;
	while(x<1)
	{
		y=x+1;
		if(area[x]>area[y])
			difference=area[x]-area[y];
		else
			difference=area[y]-area[x];
		x++;
	}

	printf("The area in grey is %.2fm2.\n", difference);


	return(0);
}
