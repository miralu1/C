#include<stdio.h>
void main(void)
{
	double new1 = 123.14, newnew;

	printf("Enter a number: ");
	scanf("%lf", &newnew);
	
	printf("%lf, %1f, %f\n", newnew, new1, new1);
	printf("%o\n", newnew);
	printf("%p\n", newnew);
}
