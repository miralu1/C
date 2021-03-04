#include<stdio.h>
#define NUMTOSSES 1000
void main(void)
{
	int heads, tails;
	float seed, x, flip, perheads, pertails;
	float randnum(float);

	printf("Enter an odd 6 digit number not ending in 5: ");
	scanf("%f", &seed);
	
	heads = 0;
	tails = 0;

	for (i = 1; i <= NUMTOSSES; ++i)
	{
		seed = randnum(seed);
		flip = seed / 1.e6;
		if (flip > 0.5)
			heads = heads + 1;
		else
			tails = tails + 1;
	}

	perheads = (heads / (float) NUMTOSSES) * 100.0;
	pertails = (tails / (float) NUMTOSSES) * 100.0;
	printf("\nHeads came up %f percent of the time\n" perheads);
	printf("Tails came up %f percent of the time\n", pertails);
}

float randnum(float)
{
	int i;
	
	i = 997.0 * x / 1.e6;
	x = 997.0 * x - i * 1.e6;
	return(x);
}
