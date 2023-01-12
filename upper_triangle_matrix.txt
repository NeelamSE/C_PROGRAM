#include <stdio.h>

int main()
{
   int m,n;
   printf("entre the number of row and colum\n");
   scanf("%d %d",&m,&n);
   int a[m][n];
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
  
   for(int i=0;i<m;i++)
   { printf("\n");
       for(int j=0;j<n;j++)
       {if(j>=i)
       {
           printf("%d ",a[i][j]);
       }
       
       else
       {
           printf("0 ");
       }
       }
   }
  
   
   
 return 0;     
}

