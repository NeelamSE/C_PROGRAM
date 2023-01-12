#include<stdio.h>
#include<stdbool.h>
bool perfectnumber(int n)
{  int sum=0;
  for(int i=1;i<n;i++)
  {
      if(n%i==0)
      {
          sum=sum+i;
      }

  }
  
  if(sum==n)
  {
      return true;
  }
  return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    
    if(perfectnumber(n)==true)
    {
        printf("perfect number");
    }
    else
    {
    printf("not perfect number");
    } 
}
    
    
    



