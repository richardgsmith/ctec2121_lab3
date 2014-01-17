
#include <stdio.h>

int main (void)
{
	int x=3;
	int y=5;
	
	printf("Please enter an integer value for x\n");
	scanf("%d");
	if (!x)
	{
		printf("The value is %d \n", x);
	}
	switch (x)
	{
		case 1: x++;
			break;
		case 2: x+=2;
			break;
		case 3:	x+=2;
		default: x+=10;
	}
	printf("%d \n",x);
		return 0;	
}

