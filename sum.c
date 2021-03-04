#include<stdio.h>
void
main (void)
{
  int n, a, b, sum;

  a = 1;
  printf ("Enter a number which to sum to from 1: ");
  scanf ("%d", &n);
  b = n;
  /* This is a comment */
  sum = n * (a + b) / 2;

  printf ("\nThe sum is: %d\n", sum);
}
