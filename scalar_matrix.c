#include <stdio.h>

int main()
{
    int n,m;
    printf("entre the number of row and colum\n");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m],c;
    printf("entre the number of ist matrix\n");
    for(int i=0;i<n;i++ )
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("entre the number multiple in matrix");
    scanf("%d",&c);
    for(int i=0;i<n;i++ )
    {
        for(int j=0;j<n;j++)
        {
         b[i][j]=c*a[i][j];
        }
    }
    for(int i=0;i<n;i++ )
    { 
        printf("\n");
        for(int j=0;j<n;j++)
        {
          printf("%d ",b[i][j]);
        }
    }
    return 0;
}

