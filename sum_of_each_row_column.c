#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the number of row and colum");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("enter the matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
    int sum=0;

      for(int j=0;j<n;j++)
        {
           sum=sum+a[i][j]; 
        }
   printf("sum of %d row %d \n",i+1,sum);
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[j][i];
        }
  printf("sum of %d colum %d \n",i+1,sum);
    }
}
