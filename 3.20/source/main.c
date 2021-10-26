#include<stdio.h>
#include<stdlib.h>

int main()
{
	float p, r, s, y;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end):\n");
		scanf_s("%f", &p);
		if (p == -1)
		{
			break;
		}
		else
		{
			printf("Enter hourly rate of the worker ($00.00):\n");
			scanf_s("%f", &r);
			s = p * r;
			y = (r * 1.5) + s;
			if (p > 40)
			{
				printf("Salary is: $%.2f\n", y);
				printf("\n");
			}
			else
			{
				printf("Salary is: $%.2f\n", s);
				printf("\n");
			}
		}
	}
	return 0;
}