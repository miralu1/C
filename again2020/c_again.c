#include<stdio.h>
#include<math.h>

void main(void)
{
	printf("Test\n");
	printf("This is the year 2020 and\nI am studying C and programming again.\n");
	
	int math = 3 + 4 * 6;
	int math1 = 2 * 3 / 12 * 8 / 4;
	int math2 = (20 - 2) / 6 + 3;

	printf("The value of math is %d and mem address is %p \n", math, &math);
	printf("The value of math is %d and mem address is %p\n", math1, &math1);
	printf("The value of math is %d and mem address is %p\n", math2, &math2);
	
	/* Write, compile and execute a C program that calculates and displays */
	/* Amount of Money A */
	/* available in N years */
	/* when an initial deposit of X dollars is deposited in the bank */
	/* paying annual interest of R percent */
	/* A = X * (1.0 + (R / 100))powN */

	printf("\n\n-----Investment Calculator-----\n");
	
	float A, X, R;
	int N;

	printf("Enter Deposit Amount: ");
	scanf("%f", &X);
	printf("Enter Number of years ofInvestment: ");
	scanf("%d", &N);
	printf("Enter Annual Interest Rate: ");
	scanf("%f", &R);

	A = X * pow((1.0 + R / 100), N);

	printf("\n$%10.2f invested for %d years at %3.2f\% interest...\n", X, N, R);
	printf("will grow to: $%12.2f\n", A);

}
