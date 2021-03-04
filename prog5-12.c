#include<stdio.h>
void main(void)
{
	int num;

	printf("NUMBER	SQUARE	CUBE\n");
	printf("------	------	----\n");
	
	for (num = 1; num <= 10; num++)
		printf("%3d	%3d	%4d\n", num, num * num, num * num * num);

}
