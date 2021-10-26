#include "stdio.h"
int main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= (5 - i); j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (-1+2*i) ; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 5; 0 <= i; i--)
	{
		for (j = 1; j <= (5 - i); j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (-1 + 2 * i); j++)
		{
			printf("*");
		}
		printf("\n");
	}

}