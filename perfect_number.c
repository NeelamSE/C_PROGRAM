#include <stdio.h>

int main()
{
    int n ,c, a=0;
    scanf("%d",&n);
    int b=n;
    for(int i=1;i<n;i++)
    {
       c=n%i; 
       
       if(c==0)
       {
           a=a+i;
           
       }
       
    }

if(a==b)
{
    printf("perfect number");
}
else 
{
   printf("not a perfect number"); 
}
    return 0;
}

