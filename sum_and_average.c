
#include <stdio.h>

int main()
{
    int n,sum=0,avg;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n;i++)
    {
    sum=sum+a[i];
    avg=sum/n;   
    }
    printf("%d %d",sum,avg);
}
