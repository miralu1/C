#include<stdio.h>
void main(void)
{
	int num = 22;
	printf("num = 22, The address of num = %p\n", &num);

	printf("Octal represenation of num is: %o\n", num);
	printf("Hexadecimal representation of num is: %x\n", num);

	float num1;
	printf("Enter a decimal number: ");
	scanf("%f", &num1);
	printf("num1 = %f, The address of num = %p\n",num1, &num1);

	printf("Octal represenation of num is: %o\n", num1);
	printf("Hexadecimal representation of num is: %x\n", num1);


	while (num <= 30)
	{
	printf("%d ", num);
	num+=2;
	}
	printf("\n\n");
	
	  
		
} 	
