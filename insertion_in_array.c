#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int a[n],ele,pos;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    printf("entre the element and location ");
    scanf("%d %d",&ele,&pos);
    for(int i=n-1;i>pos;i--)
 {
     a[i+1]=a[i];
 }
   a[pos]=ele;
   n++;
   for(int i=0;i<n;i++)
   printf("%d ",a[i]);
    return 0;
}

