#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, high, i, j;
	printf("Enter length:");
	scanf_s("%d", &length);
	printf("Enter high:");
	scanf_s("%d", &high);
	for (i = 0; i < high; i++)
	{
		for (j = 0; j < length; j++)
		{
			if ((i == 0) || (i == high-1) || (j == 0) || (j == length-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}