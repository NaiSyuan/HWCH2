#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double principal = 5000.0;
	double rate1 = 0.1;
	double rate2 = 0.105;
	double rate3 = 0.115;
	double rate4 = 0.12;
	

	printf("%4s%24s%26s%26s%24s\n", "Year", "Amount on deposit10%", "Amount on deposit10.5%", "Amount on deposit11.5%", "Amount on deposit12%");

	for (unsigned int year = 1; year <= 15; ++year)
	{
		double amount1 = principal * pow(1.0 + rate1, year);
		double amount2 = principal * pow(1.0 + rate2, year);
		double amount3 = principal * pow(1.0 + rate3, year);
		double amount4 = principal * pow(1.0 + rate4, year);


		printf("%4u%24.2lf%26.2lf%26.2lf%24.2lf\n", year, amount1, amount2, amount3, amount4);
	}
}