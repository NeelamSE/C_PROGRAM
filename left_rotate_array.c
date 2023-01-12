#include <stdio.h>

int
main ()
{
  int n;
  int x = 0;
  printf ("entre the number of array\n");
  scanf ("%d", &n);
  int a[n], b[n];
  int c;
  printf ("how many left rotate\n");
  scanf ("%d", &c);
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }

  for (int i = c; i < n; i++)
    {
      b[x] = a[i];
      x++;
    }

   for(int i=0;i<c;i++)
   {
       b[i+x]=a[i];
   }
   for(int i=0;i<n;i++)
   {
    printf("%d ",b[i]);
   }
    return 0;
}


