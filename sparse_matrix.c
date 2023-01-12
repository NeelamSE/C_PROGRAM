#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int c,d;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        { 
            if(a[i][j]==0)
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        
    }
    
    if(c>=d)
    {
        printf("sparse matrix");
    }
    else 
    {
        printf("not a sparse matrix");
    }
    
    return 0;
}

