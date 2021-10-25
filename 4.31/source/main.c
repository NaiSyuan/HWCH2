#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	int k = 9;
	for (i = 0; i < 5; i++)
	{
		for(j=4; j>i; j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i*2; j++)
		{
			printf("*");
		}
			printf("\n");
	}
	for (i = 4; i > 0; i--)
	{		
		for (j = i; j <= 4; j++)
		{
			printf(" ");
		}
		for (j = i*2-1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}