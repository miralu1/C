#include<stdio.h>
void main(void)
{
	printf("Computers, computers everywhere");
	printf("\n  as fas as I can C\n");

	printf("The value of 6 times 4 is :%d \n", 6 * 4);
	printf("The value of .06 times 4.5 is :%f \n", 0.06 * 4.5);

	/* Declaration Statement: naming a variable and specifying data type. */
	
	int num1, num2, num3;
	printf("Enter 3 numbers: ");
	scanf("&num1 &num2 &num3");
	printf("\n\nThe size of num1: %d\n", sizeof(num1));
	printf("\n\nThe size of num2: %d\n", sizeof(num2));
	printf("\n\nThe size of num3 %d\n", sizeof(num3));

	printf("The address of num1 is : %p\n", &num1);
	printf("The address of num1 is : %p\n", &num2);
	printf("The address of num1 is : %p\n", &num3);

	int count;
	count = 0;
	
	printf("The initial value of ocunt is %d. \n", count);
	++count;
	printf("    count is now %d. \n", count);
	++count;
	printf("    count is now %d. \n", count);
	++count;
	printf("    count is now %d. \n", count);
	++count;
	printf("    count is now %d. \n", count);

	printf("The decimal value of 15 is %d \n", 15);
	printf("The octal value of 15 is %o \n", 15);
	printf("The hexadecimal value of 15 is %x \n", 15);




}
