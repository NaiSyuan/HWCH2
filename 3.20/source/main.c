#include <stdio.h>
#include <stdlib.h>

float main(void)
{
	float hours, rate, salary;
	printf("Enter # of hours works:");
	scanf_s("%f", &hours);
	printf("Enter hourly rate of the worker(NT$00.00):");
	scanf_s("%f", &rate);
	if (hours <= 40)
	{
		printf("Salary is%.2f",hours * rate);
	}
	else if (hours > 40)
	{
		printf("Salary is NT$%.2f", 40 * rate + (hours-40)* 1.5 *rate);
	}
}