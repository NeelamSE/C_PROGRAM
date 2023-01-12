#include <stdio.h>

int main()
{
  int even=0,odd=0,n,i;
  printf("how many number you want");
  scanf("%d",&n);
  int a[n];
  printf("entre number %d",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      if(a[i]%2==0)
           even++;
        else
          odd++;
  }
   printf("\noccurance of");
   printf("\neven number %d",even);
   printf("\nodd number %d",odd);
    return 0;
}

