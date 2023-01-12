#include <stdio.h>

int main()
{
    int n ,m ,LCM=1;
    scanf("%d%d",&n,&m);
    int c=m>n?m:n;
    for(int i=1;i<=c;i++)
    {
        if(c%n==0 && c%m==0)
        {
        printf("%d",c);
        break;
        }
        c++;
    } 
   
    
    return 0;
}

