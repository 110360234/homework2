#include<stdio.h>
#include<stdlib.h>

int main()
{
	int code, r, a, b, c;
	int num1, num2;
	double m1,m2, m3, w, h;

	m1 = 700; //manger's salary are 700 us dollars
	a = 30;
	b = 40;
	c = 50;
	r = 5; //Hourly rate 5 dollars
	code != 5;
	while (1)
	{
		printf("Enter your salary code:\n");
		scanf_s("%d", &code);

			switch (code)
			{
			case 1:
				 printf("Your salary are %.2lf US dollars\n",m1);
				 printf("\n");
				 break;
			case 2:
				printf("Enter your working hours:\n");
				scanf_s("%lf", &h);
				if (h > 40)
				{
					m2 = (40 * r) + ((h - 40)*1.5);
				}
				else
				{
					m2 = (h * 5);
				}
				printf("Your salary are %.2lf dollars\n", m2);
				printf("\n");
				break;
			case 3:
				printf("Enter your sales amount for the week:\n");
				scanf_s("%lf", &w);
				m3 = 250 + (w*(0.057));
				printf("Your salary are %.2lf dollars\n", m3);
				printf("\n");
				break;
			case 4:
				while (1)
				{
					printf("What type of product produce you participate(A(1) or B(2) or C(3)) :\n");
					scanf_s("%d",&num1);

						if (num1 == 1)
						{
							printf("How many pruducts you produce:\n");
							scanf_s("%d", &num2);
							m3 = a * num2;
							printf("Your salary are %.2lf dollars\n", m3);
							printf("\n");
							break;
						}
						else if (num1 == 2)
						{
							printf("How many pruducts you produce:\n");
							scanf_s("%d", &num2);
							m3 = b * num2;
							printf("Your salary are %.2lf dollars\n", m3);
							printf("\n");
							break;
						}
						else if (num1 == 3)
						{
							printf("How many pruducts you produce:\n");
							scanf_s("%d", &num2);
							m3 = c * num2;
							printf("Your salary are %.2lf dollars\n", m3);
							printf("\n");
							break;
						}
						else
						{
							printf("Plese enter the right code\n");
						}
				}
		    }
	}
	return 0;
}