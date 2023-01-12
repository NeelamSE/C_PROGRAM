
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ;i++)
    {
         if(i%2==0)
         { int c=0;
             for(int j=0;j<=i;j++) 
             {
                 
              printf("%d",c); 
              c=!c;
             }
             printf("\n");
             
         }
         
         else
         {
             int c=1;
             for(int j=0;j<=i;j++)
             {
                 
              printf("%d",c); 
              c=!c;
             }
             printf("\n");
             
         }
    }
       
    return 0;
}
