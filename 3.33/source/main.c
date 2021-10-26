#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y,i,j;
	char sign = '+';
	printf("Enter your program reads a length:\n");
	scanf_s("%d", &y);
	printf("Enter your program reads a breadth:\n");
	scanf_s("%d", &x);
	printf("\n");
	for (i = 0;i < y; i++)
	{
		for (j = 0;j < x; j++)
		{
			if ((i == 0) || (i == (y-1)) || (j == 0) || (j == (x-1)))
			{
				printf("%c",sign);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}