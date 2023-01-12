#include <stdio.h>

int main()
{
    int n ;
    long long a=1;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
    {
        a=a*i;
        
    }
      printf("%lld",a);
    return 0;
}

