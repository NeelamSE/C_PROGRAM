
#include <stdio.h>

int main()
{
    int positive=0,negative=0,zero=0,n,i,a[i];
    printf("how many number you want to entre");
    scanf("%d",&n);
    printf("entre number %d",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
         if(a[i]>0)
                positive++;
        else if(a[i]<0)
                negative++;
        else
              zero++;
     }
     printf("\noccurance of");
     printf("\npositive number : %d ",positive);
     printf("\nnegative number : %d ",negative);
     printf("\nzero number : %d ",zero);
    return 0;
}

