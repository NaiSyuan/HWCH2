#include <stdio.h>
#include <stdlib.h>

float main(void)
{
	float salesdollar, total;
	int a;
	for (a = 0; a < 4; a++)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &salesdollar);
		total = 200 + salesdollar * 0.09;
		printf("Salary is: %.2f\n", total);
	}
		
}