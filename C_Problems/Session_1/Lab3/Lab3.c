#include <stdio.h>

void main()
{
	int x, y;
	printf("Please enter number 1: ");
	scanf("%d",&x);
	printf("Please enter number 2: ");
	scanf("%d",&y);
	int sum, multi;
	sum = x + y;
	multi = x * y;
	printf("X + Y = %d\n",sum);
	printf("X * Y = %d\n",multi);	
	
}