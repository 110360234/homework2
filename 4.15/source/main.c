#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	double principle = 5000.0;
	double rate = 0.05;

	printf("%4s%21s\n", "year", "Amount on deposit");

	for (unsigned int year = 1; year <= 15; ++year)
	{
		double amount = principle * pow(1.0 + rate, year);
		printf("%4u%21.2f\n", year, amount);
	}
}