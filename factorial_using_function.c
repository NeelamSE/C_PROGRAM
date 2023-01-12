#include<stdio.h>
int fact(int n)
{
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("%d",fact);
    return (fact);
}
int main()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  fact(n);
}
