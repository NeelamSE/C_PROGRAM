#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    int a[n],b[m],c[n+m],i,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    k=i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
   for(int i=0;i<n+m;i++)
   {
       printf("%d ",c[i]);
   }
   
}
