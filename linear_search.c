
#include <stdio.h>

int main()
{
    int n;
   scanf("%d",&n);
   int a[n],item,loc;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
 printf("entre the element to be search");
 scanf("%d",&item);
 printf("liner search");
 for(int i=0;i<n;i++)
 {
     if(a[i]==item)
     {
         loc=i+1;
         break;
     }
 }
 if(loc>0)
 printf("element found in location");
 else
 printf("element not found");
    return 0;
}


  

