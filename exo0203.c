#include <stdio.h>

int main()
{
	int input[3];
	printf("please enter three numbers: ");

	int x = 0;
	while (x<3)
	{
		scanf("%d", &input[x]);
		x++;
	}

	// sort by increasing values
	x=0;
	int y, temp;
	
	while(x<2)
	{
		y=x+1;
		while(y<3)
		{
			if(input[x] > input[y])
			{
				temp=input[x];
				input[x]=input[y];
				input[y]=temp;
			}
			y++;
		}
		x++;
	}

	puts("Now they are in order: ");
	x=0;
	while (x<3)
	{
		printf("%d\t", input[x]);
		x++;
	}
	putchar('\n');
	return(0);
}
		

