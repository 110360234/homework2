#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double l,a,b,c,d,s,m;

	while (1)
	{
		
	printf("Enter counter number(-1 to end):\n");
	scanf_s("%lf", &a);
	if (a == -1)
	{
		break;
	}
	else 
	{
	printf("Enter mortgage amount (in dollars):\n");
	scanf_s("%lf", &b);
	printf("Enter mortgage term (in years):\n");
	scanf_s("%lf", &c);
	printf("Enter interest rate (as a decimal):\n");
	scanf_s("%lf", &d);
	l = d * b * c;
	s = l + b;
	m = s /( 12 * c);
	printf("The monthly payable $ %.0lf \n",m);
	}
	}
	return 0;
}