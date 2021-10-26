#include<stdio.h>
#include<stdlib.h>

int main()
{
	float d, s;
	while(1)
	{
		printf("Enter sales in dollars (-1 to end):\n");
		scanf_s("%f", &d);
		if (d == -1)
		{
			break;
		}
		else
		{
			s = (d * 0.09 + 200);
			printf("Salary is: $%.2f\n", s);
			printf("\n");
		}
	}
	return 0;
}