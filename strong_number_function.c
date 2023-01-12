#include<stdio.h>
#include<stdbool.h>

int facto(int n)
{  
    int fact=1;
    if(n==0||n==1)
   {
    return 1;
   }
  
  else{
  for(int i=1;i<=n;i++)
  {
      fact=fact*i;
  }
   return fact;
  }
   
}

bool strongnumber(int n)
{
   int digit;
   int m=n;
   int sum=0;
   
   while(n>0)
   {
     digit=n%10;
     n=n/10; 
     sum=sum+facto(digit);
   }
   if(sum==m)
   {
       return true;
   }
return false;
}


int main()
{
   int n;
   scanf("%d",&n);
 
    if(strongnumber(n))
   {
       printf("strong number");
   }
   else
   {
       printf("not strong number");
   } 
 
  
}
