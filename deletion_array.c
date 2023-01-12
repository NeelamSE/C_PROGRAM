
#include <stdio.h>

int main()
{
 int n;
 scanf("%d",&n);
 int a[n],loc;
 for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("entre the location");
  scanf("%d",&loc);
  for(int i=loc;i<n-1;i++)
  {
      a[i]=a[i+1];
      n--;
  }
  for(int i=0;i<n;i++)
  printf("%d ",a[i]);
    return 0;
}

