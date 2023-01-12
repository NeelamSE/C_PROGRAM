#include <stdio.h>

int main()
{
   int i,n;
   printf("how many number you want to entre");
   scanf("%d",&n);
   int a[n];
   printf("entre number %d",n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
   printf("%d ",a[i]);
    return 0;
}

