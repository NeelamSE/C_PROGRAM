#include <stdio.h>

int main()
{
    int m,n,i,j;
   printf("entre the number of row and column");
   scanf("%d ,%d",&m,&n);
   int a[m][n],b[n][m],c[m][n];
   printf("entre the value of 1st matrix\n");
   for(i=0;i<m;i++)
       for( j=0;j<n;j++)
         scanf("%d",&a[i][j]);
   
    printf("entre the value of 2nd matrix\n");
   for(i=0;i<m;i++)
       for(j=0;j<n;j++)
       scanf("%d",&b[m][n]);
   for( i=0;i<m;i++)
   for(j=0;j<n;j++)
   c[i][j]=a[i][j]+b[i][j];
    for( i=0;i<m;i++)
   {for(j=0;j<n;j++)
       printf("%d",c[i][j]);
       printf("\n");
   }
    return 0;
}


