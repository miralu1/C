#include<stdio.h>
void main(void)
{

	int *num_addr;
	int miles, dist;

	dist = 158;
	miles = 22;
	num_addr = &miles;

	printf("The address stored in num_addr is %p\n", num_addr);
	printf("The value pointed to by num_addr is %d\n\n",*num_addr);
	num_addr = &dist;
	printf("The address now stored in num_addr is %p\n", num_addr);
	printf("The value now pointed to by num_addr is %d\n", *num_addr);

	char key, choice;
	int num, count;
	long date;
	float yield;
	double price;

	printf("\n\n");
	printf("Character address %p %p\n", &key, &choice);
	printf("Integer address %p %p\n", &num, &count);
	printf("Long int address %p\n", &date);
	printf("float address %p\n", &yield);
	printf("double float address %p\n", &price);

	printf("\n\n");
	printf("Storage reserved for Character is %d bytes.\n", sizeof(key));
	printf("Storage reserved for Integer is %d bytes.\n", sizeof(num));
	printf("Storage reserved for long int is %d bytes.\n", sizeof(date));
	printf("Storage reserved for float is %d bytes.\n", sizeof(yield));
	printf("Storage reserved for double precision is %d bytes.\n", sizeof(price));

}
