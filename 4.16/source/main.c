#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j,n;
	char sign = '*';

	printf("(A)\n");
	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("(B)\n");
	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	printf("(C)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <=10; j++)
		{
			if (j <= i) 
			{
				printf("%c", ' ');

			}
			else
			{
				printf("%c", '*');
			}
		}
		printf("\n");
	}

	printf("(D)\n");
	for (i = 10; i > -1; i--)
	{
		for (j = 0; j <= 10; j++)
		{
			if (j <= i)
			{
				printf("%c", ' ');
			}
			else
			{
				printf("%c", '*');
			}
		}
		printf("\n");
	}
	return 0;
}