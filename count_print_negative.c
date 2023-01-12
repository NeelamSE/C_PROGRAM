#include <stdio.h>

int
main ()
{
  int i, n, negative = 0;
  printf ("how many number you wnat");
  scanf ("%d", &n);
  int a[n];
  printf ("entre number %d", n);
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  for (i = 0; i < n; i++)
    {
      if (a[i] < 0)
	{
	  negative++;
	  printf("%d ",a[i]);

	}
    }
  printf ("%d\n",negative);

  return 0;
}

