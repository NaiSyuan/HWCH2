#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int manager = 1000;
	int sales;
	int num1;
	double hourlywage, worker1, worker2, hour1;
	
	printf("�п�J���u���(�g�z�H��:1�A���~�u:2�A��Ī��u:3�A�s�u:4�A�h�X:-1):");
	scanf_s("%d", &a);

	
	while (a != -1)
	{
		switch (a)
		{
		case 1:
			printf("�A���~��O:%d", manager);
			break;

		case 2:

			printf("Enter your work hour:");
			scanf_s("%lf", &hour1);

			printf("Enter your hourly wages:");
			scanf_s("%lf", &hourlywage);

			if (hourlywage <= 40)
			{
				printf("Your wage is:%.2lf", hourlywage*hour1);
			}
			else if (hourlywage > 40)
			{
				printf("Your wage is:%.2lf", hourlywage * 40 + hourlywage * 1.5*(hour1 - 40));
			}
			break;

		case 3:
			printf("Enter your weekly sales:");
			scanf_s("%d", &sales);
			printf("Your wage is %.2lf", 250 + sales * 0.057);

			break;

		case 4:
			printf("��J�Ͳ��έײz�����:");
			scanf_s("%d", &num1);

			printf("Your weekly pay is:%d", 5*num1);
			break;
		}
		printf("\n\n�п�J���u���(�g�z�H��:1�A���~�u:2�A��Ī��u:3�A�s�u:4�A�h�X:-1):");
		scanf_s("%d", &a);
	}
	return 0;
}
