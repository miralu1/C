#include<stdio.h>
void main (void)
{
	int min, hour;
	void time(int *, int *);
	
	printf("\nEnter two numbers: ");
	scanf("%d %d", &min, &hour);
	time(&min, &hour);

	int n, result;
	int factorial(int);
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	result = factorial(n);
	printf("\nThe factorial of %d is %d\n", n, result);
	
}

int factorial(int n)
{
	if (n == 1)
		return (n);
	else
		return (n * factorial(n-1));
}

void time(int *m, int *hr)
{
	int sec;
	
	sec = (*hr * 60 + *m) * 60;
	printf("\nThe total number of seconds is %d\n", sec);
}


