#include<stdio.h>
int main()
{
    int n,c,x=0;;
    printf("enter the size of array ");
    scanf("%d",&n);
    int a[n],b[n];
    
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("how many right rotate you want");
    scanf("%d",&c);
   
    for(int i=c;i<n;i++) 
    {
        b[i]=a[i-c];
        x++;
    }
    for(int i=0;i<c;i++)
    {
        b[i]=a[i+x];
    }
    for(int i =0;i<n;i++)
    {
       printf("%d ",b[i]);
    }
}

