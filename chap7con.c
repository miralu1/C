#include<stdio.h>
void main(void)
{
	float firstnum, secnum;
	void newval(float *, float *);
	
	printf("\nEnter two numbers: ");
	scanf("%f %f", &firstnum, &secnum);

	printf("\nThe value in firstnum is %f\n", firstnum);
	printf("\nThe value in secnum is %f\n", secnum);
	

	newval(&firstnum, &secnum);

	printf("\nThe value in firstnum is now %f\n", firstnum);
	printf("\nThe value in secnum is now %f\n", secnum);
	
	
}

void newval(float *num_addr1, float *num_addr2)
{
	printf("\nThe number whose address is in num_addr1 is %f\n", *num_addr1);
	printf("The number whose address is in num_addr2 is %f\n", *num_addr2);
	
	*num_addr1 = 89.5;
	*num_addr2 = 99.5;

	return;
	
}
