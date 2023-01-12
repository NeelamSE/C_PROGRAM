#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],sorting;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                sorting=a[j];
                a[j]=a[j+1];
                a[j+1]=sorting;
            }
        }
    }
    printf("\nafter sorting ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}

