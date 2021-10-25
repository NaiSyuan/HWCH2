#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("(A)\n");
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(B)");
	printf("\n");

	for (i = 10; i > 0; i--)
	{
		
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(C)");
	printf("\n");

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < i ; j++)
		{
			printf(" ");
		}
		for (j = 10; j >i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");

	printf("(D)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i+1; j--)
		{
			printf("%s", " ");
		}

		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
}