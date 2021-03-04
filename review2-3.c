#include<stdio.h>
void main(void)
{
	/* Chapter 2 Review Questions */
	int num1 = 4;
	long num2 = 20000001;
	float num3 = 72.41;
	double num4 = -1489.99;
	char let = 'e';
	
	
	printf(" Bytes of storage used by an integer: %d\n", sizeof(num1));
	printf(" Bytes of storage used by an long integer: %d\n", sizeof(num2));
	printf(" Bytes of storage used by an floating: %d\n", sizeof(num3));
	printf(" Bytes of storage used by an double: %d\n", sizeof(num4));
	printf(" Bytes of storage used by a character: %d\n", sizeof(let));
	printf("\nMemory address of integer; %p\n", &num1);
	printf("Memory address of long integer; %p\n", &num2);
	printf("Memory address of flaoting; %p\n", &num3);
	printf("Memory address of double; %p\n", &num4);
	printf("Memory address of character; %p\n", &let);
	
	printf("\nBase 10 value: %d\n", 14);
	printf("Base 8 (octal) value: %o\n", 1332114);
	printf("Base 16 (hexa) value: %x\n", 124423324);	

	printf("\nDecimal value of Octal 5051622: %d\n", 05051622);
	printf("Decimal value of Hexa 0x7ffcd7652ab0: %d\n", 0x7ffcd7652ab0);

	printf("\n Octal value of 155 is: %#o\n", 155);
	printf("Hexa value of 155 is: %#x\n", 155);

}
