#include<stdio.h>
int main()
{
    int n;
    printf("enter how many number you want in array\n");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    int *p=&a[0];
    int *q=&b[0];
    int *r=&c[0];
    printf("enter number of 1st array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("enter number of 2nd array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",q+i);
    }
    for(int i=0;i<n;i++)

    {
        *(r+i)=*(p+i)+*(q+i);
    }
    for(int i=0;i<n;i++)
   {
       printf("%d ",*(r++));
   }

}

