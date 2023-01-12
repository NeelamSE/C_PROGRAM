
#include <stdio.h>

int main()
{
    int n,m;
    printf("entre the number of row and column");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("entre the number");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
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

