#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int b=n;
    int c; 
    int sum=0;
    while(n>0)
    {
       c=n%10;
       sum=sum+(c*c*c);
       n=n/10;
    }
    if (sum==b)
    {
        printf("armstrong number");
    }
    else{
      printf("not armstrong number"); 
    }
    
    return 0;
}

