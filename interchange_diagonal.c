#include <stdio.h>

int main()
{
   int n,m;
   printf("entre the number of row and colum");
   scanf("%d %d",&n,&m);
   int a[n][m],b[n][m];
   printf("enter the number of matrix\n");
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }    
   for(int i=0;i<n;i++)
   {
       int swap=a[i][i];
       a[i][i]=a[i][n-i-1];
       a[i][n-i-1]=swap;
   }
   for(int i=0;i<n;i++)
   {
       printf("\n");
       for(int j=0;j<m;j++)
       {
           printf("%d ",a[i][j]);
       }
   }
   return 0;
}
      
  
  
