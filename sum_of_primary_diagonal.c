#include <stdio.h>

int main()
{
     int n,m ,sum=0;
     printf("enter  the number of row and colum\n");
     scanf("%d %d",&n,&m);
     int a[n][m];
     printf("enter the matrix");
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {  
             if((i+j)==(n-1))
             {
                sum=sum+a[i][j];
             }
         }
     }
     printf("sum of diagonal matrix are:");
     printf("%d",sum);
    return 0;
}

