#include <stdio.h>

int main()
{
    int n,m;
    printf("entre the number of row and colum");
    scanf("%d %d",&m,&n);
    int a[n][m],b[n][m],c[n][m];
    printf("entre the number of 1st matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("entre the number of 2nd matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<m;j++)
        {
    printf("%d ",c[i][j]);
        }
    }
    return 0;
}

