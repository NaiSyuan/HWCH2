#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("����\t���1\t���2\t\n");
	printf("======================\n");
	for (c = 1; c <= 500; c++)
	{
		for (b = 1; b < c; b++)
		{
			for (a = 1; a < c; a++)
			{
				if (a * a + b * b == c*c)
					printf("%d\t%d\t%d\n", c, a, b);
			}
		}
	}
	return 0;
}