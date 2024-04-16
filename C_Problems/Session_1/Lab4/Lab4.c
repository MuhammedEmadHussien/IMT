#include <stdio.h>

void main(void)
{
	int x, y, z, k, m, L, N;
	printf("Please Enter the value of x : ");
	scanf("%d",&x);
	printf("x = %d\n",x);
	printf("Please Enter the value of y : ");
	scanf("%d",&y);
	printf("y = %d\n",y);
	printf(" \n");
	z = x & y;
	printf("z = %d\n",z);
	k = x | y;
	printf("k = %d\n",k);
	m = x ^ y;
	printf("m = %d\n",m);
	L = x >> 1;
	printf("L = %d\n",L);
	N = y << 2;
	printf("N = %d\n",N);
}