#include<stdio.h>
#define BEGIN {
#define END }
void main(void)
BEGIN
	char ab, ac, ad;

	printf("Enter three letters:");
	scanf("%c %c %c", &ab, &ac, &ad);

	printf("ab = %c\nac = %c\nad = %c\n", ab, ac, ad);
	printf("The value of 3 < 4 is %d\n", 3 < 4);
	printf("The value of 2 > 4 is %d\n", 2 > 4);
	
	char design = '*', d2 = ':';
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%p %p %p\n", &ab, &ac, &ad);
		printf("-------------------------------------------\n");
		
	
	}
	printf("\n");

END
