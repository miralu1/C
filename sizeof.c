#include<stdio.h>
void main(void)
{
	int num = 10000;
	long num2 = 1231414;
	float fnum = 1.231;
	double dnum = -234.23;
	char letter = 'A';

	printf("Size of small integer: %d\n", sizeof(num));
	printf("Size of long integer: %d\n", sizeof(num2));
	printf("Size of float: %d\n", sizeof(fnum));
	printf("Size of double:%d\n", sizeof(dnum));
	printf("Size of a character: %d\n", sizeof(letter));

	printf("\n\nVariable Addresses\n");
	printf("num = %d, the address of num = %p.\n", num, &num);
	printf("num2 = %ld, the address of num = %p.\n", num2, &num2);
	printf("fnum = %f, the address of num = %p.\n", fnum, &fnum);
	printf("dnum = %lf, the address of num = %p.\n", dnum, &dnum);
	printf("char = %c, the address of num = %p.\n", letter, &letter);

	printf("\n\nNumber Bases\n");
	printf("Decimal base: %d\n", num);
	printf("Octal base: %o\n", num);
	printf("Octal base with modifier: %#o\n", num);
	printf("Hexadecimal base: %x\n", num);
	printf("Hexadecimal base with modifer: %#x\n", num);

	printf("\n\nBase Conversions\n");
	printf("Octal integer constants -> decimal\n025 -> %d.\n", 025);	
	printf("Hexadecimal numbers -> decimal\n0x7ffd06289c2f -> %d\n", 0x7ffd06289c2f);
	
}
