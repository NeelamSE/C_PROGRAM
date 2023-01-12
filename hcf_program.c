#include<stdio.h>
#include<math.h>
int main()
{
    int n,m, HCF=1;
    scanf("%d%d",&n,&m);
    int c=(m>n?m:n);
    for(int i=1;i<=c;i++)
    {
        if(n%i==0 && m%i==0)
        {
            HCF=i;
        }
    }
    printf("%d",HCF);
    return 0;
}

