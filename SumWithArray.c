#include <stdio.h>
int
main ()
{
  int i, n, sum = 0;
  printf ("elements of array");
  scanf ("%d", &n);
  char a[n];
  for (i = 0; i <= n - 1; i++)
    scanf ("%d", &a[i]);

  for (i = 0; i <= n - 1; i++)
    sum = sum + a[i];
  printf ("Sum is equal to %d", sum);
}

