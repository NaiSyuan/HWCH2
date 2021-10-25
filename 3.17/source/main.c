#include <stdio.h>
#include <stdlib.h>

float main(void)
{
	int account;
	float  bbalance, tcharge, tcredits, creditlim;
	printf("Enter acount number(-1 to end):");
	scanf_s("%d", &account);
	while (account != -1)
	{
		if (account == 100)
		{
			printf("Enter beginning balance:");
			scanf_s("%f", &bbalance);
			printf("Enter total charges:");
			scanf_s("%f", &tcharge);
			printf("Enter total credits:");
			scanf_s("%f", &tcredits);
			printf("Enter credit limit:");
			scanf_s("%f", &creditlim);
			printf("Account:\t%d\n", account);
			printf("Credit limit:\t%.2f\n", creditlim);
			printf("Balance:\t%.2f\n", bbalance + tcredits);
			if (bbalance + tcredits > creditlim)
			{
				printf("Credit limit exceeded.\n");
			}
			
		}

		if (account != 100)
		{
			printf("Enter beginning balance:");
			scanf_s("%f", &bbalance);
			printf("Enter total charges:");
			scanf_s("%f", &tcharge);
			printf("Enter total credits:");
			scanf_s("%f", &tcredits);
			printf("Enter credit limit:");
			scanf_s("%f", &creditlim);
			printf("\n");
		}
		printf("Enter acount number(-1 to end):");
		scanf_s("%d", &account);
	}
	return 0;
}
