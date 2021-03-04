#include<stdio.h>
void main(void)
{
	/* Question 1 */
	/* Function name time:(int, int *, int *, int *)*/
	/* Convert passed seconds value into hours, minutes and secs */
	/* Pointers should alter calling function arguments */

	void time(int, int *, int *, int *);
	int num, sec = 0, min = 0, hour = 0;
	
	printf("Enter seconds: ");
	scanf("%d", &num);

	time(num, &min, &sec, &hour);

	printf("For %d seconds,\n  there are %d hour(s), %d min(s) and %d sec(s)\n", num, hour, min, sec);

}

void time(int seconds,int *min, int *sec,int *hour)
{


	*hour = (float) ((seconds / 60) / 60);
	*min = (float) (seconds / 60) - (*hour * 60);
	*sec = (float) (seconds - ((*hour * 60) * 60) - (*min * 60));
	return;	
}
