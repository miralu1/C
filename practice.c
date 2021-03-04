#include<stdio.h>
void main(void)
{
	int num = 234;
	long lnum = 342;
	float fnum = 3151.15;
	double dnum = 234.14511231;
	char let = 'X';

	printf("The size of integer is : %d bytes.\n", sizeof(num));
	printf("The size of long int is: %d bytes.\n", sizeof(lnum));
	printf("The size of float is:    %d bytes.\n", sizeof(fnum));
	printf("The size of double is:   %d bytes.\n", sizeof(dnum));
	printf("The size of character is:%d bytes.\n\n", sizeof(let));

	printf("\n Variable addressed\n");
	printf("Address of num is: %p\n", &num);
	printf("Address of lnum is: %p\n", &lnum);
	printf("Address of fnum is: %p\n", &fnum);
	printf("Address of dnum is: %p\n", &dnum);
	printf("Address of let is: %p\n", &let);

	printf("\nBase representation\n");
	printf("Num in decimal: %d\n", num);
	printf("Num in octal:   %o\n", num);
	printf("Num in Hexadec: %x\n", num);

	printf("\nBase conversions\n");
	printf("Octal -> Decimal: %#o --> %d\n", 025, 025);
	printf("Hexa  -> Decimal: %#x --> %d\n", 0x7ffe7d415c2f, 0x7ffe7d415c2f);
	int count = 1;

	while (count == 1)
	{
	printf("\n\nChoose from the following:\n");
	printf("1. Cake\t2. Dates\t3. Chocolate\n");
	int opcode, cake, dates, choc;
	scanf("%d", &opcode);

	switch (opcode)
		{
		case 1:
		printf("You have chosen to eat cake\n");
		printf("Pick the type of cake:\n");
		printf("1. Vanilla\t2. Chocolate\t3. Strawberry\n");
		scanf("%d", &cake);
		switch (cake)
		{
		case 1:
		printf("You ordered a Vanilla Cake\n");
		break;
		case 2:
		printf("You ordered a Chocolate Cake\n");
		break;
		case 3:
		printf("You ordered a Strawberry Cake\n");
		break;
		}
		break;
		case 2:
		printf("You have ordered Dates\n");
		break;
		case 3:
		printf("You have ordered Chocolates\n");
		break;
		}	
	}
}
