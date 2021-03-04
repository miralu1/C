#include<stdio.h>
void main(void)
{
	int count;
	void teststat(void);
	
	for (count = 1; count <= 3; count++)
		teststat();

}

void teststat(void)
{

	static int num = 0;
	
	printf("The value of the static variable num is now %d\n", num);

	num++;

	return;

}
