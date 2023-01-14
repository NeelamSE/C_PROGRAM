#include<stdio.h>
void sum_of_naturalnumber(int n)
{
    int sum=(n*(n+1))/2;
    printf("%d\n",sum);
}
void  sum_of_evennumber(int n)
{
    int sum=0;
    for(int i=2;i<n;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
}
void sum_of_oddnumber(int n)
{
   int sum=0;
   for(int i=1;i<n;i=i+2)
   {
       sum=sum+i;
   }
   printf("%d\n",sum); 
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("sum of natural number\n");
    sum_of_naturalnumber(n);
    printf("sum of even number\n");
    sum_of_evennumber(n);
    printf("sum of odd number\n");
    sum_of_oddnumber(n);
}   