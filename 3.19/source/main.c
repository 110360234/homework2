#include<stdio.h>
#include<stdlib.h>

int main()
{
	float i, p , r, d;
	while (1)
	{
		printf("Enter loan principle (-1 to end):\n");
		scanf_s("%f", &p);
		if (p == -1)
		{
			break;
		}
		else
		{
			printf("Enter interest rate:\n");
			scanf_s("%f",&r);
			printf("Enter term of loan in days:\n");
			scanf_s("%f", &d);
			i = p * r * d / 365;
			printf("The interest charge is $%.2f\n", i);
			printf("\n");
		}
	}
	return 0;
}