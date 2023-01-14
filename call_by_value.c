#include<stdio.h>
void swap(int a,int b)
{
  int temp=a;
  a=b;
  b=temp;
  printf("inside external function \n");
  printf("a= %d, b=%d \n",a,b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("inside main function \n");
    printf("a= %d, b=%d \n",a,b);
}
