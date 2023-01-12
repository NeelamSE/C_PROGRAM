#include <stdio.h>

int main()
{
    int i,n;
    printf("how many no you want");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}