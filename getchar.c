#include <stdio.h>
#define MAXCHARS 81

void main(void)
{
	char message[MAXCHARS], c;
	int i = 0;

	printf("Enter a sentence: ");
	
while (i < (MAXCHARS -1) && (c = getchar()) !='\n')
{
	message[i] = c;
	i++;
}

	message[i] = '\0';
	printf("The sentence just entered is: \n");
	puts(message);
}
