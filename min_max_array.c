#include <stdio.h>

int main()
{
   int i,n,max,min;
   printf("how many number you want");
   scanf("%d",&n);
   int a[n];
   printf("emtre number %d",n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   min=max=a[0];
   
   for(i=1;i<n;i++)
   {
       if(min>a[i])
              min=a[i];
       if(max<a[i])
              max=a[i];
   }
   printf("max=%d  min=%d",max,min);
   
   
   
    return 0;
}

