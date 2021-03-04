#include<stdio.h>
#define NUMBERS 10
void main(void)
{
	int i;
	float seed;
	float randnum(float);
	
	printf("Enter an odd 6-digit number not ending in 5: ");
	
	scanf("%f", &seed);
	
	for (i = 1; i <= NUMBERS; ++i)
	{
		seed = randnum(seed);
		printf("%14.6f\n", seed);
	}	
}

float randnum(float x)
{
	int i;
	
	i = (int) (997.0 * x / 1.e6);
	x = 997.0 * x - i * 1.e6;
	return(x);
}
