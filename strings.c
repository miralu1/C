#include<stdio.h>
#define MAXCHARS 81
void main (void)
{
	char message[MAXCHARS];

	printf("Enter a string: ");
	gets(message);
	printf("The string just entered is:\n");
	puts(message);
}
