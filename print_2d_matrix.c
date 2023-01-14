#include<stdio.h>
int main()
{
    int n,m;
    printf("enter number of row and column\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("enter number of matrix\n");
    int *p=&a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",*(p+i)+j);
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d" *(*(p+i)+j));
        }
    }
    
    return 0;
}
