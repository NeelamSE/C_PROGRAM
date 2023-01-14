#include<stdio.h>
void diameter(float n)
{
    float r=2*n;
    printf("%f\n",r);
}
void area(float n)
{
   float a=3.14*n*n;
   printf("%f\n",a);
}
void circumference(float n)
{
    float c=2*3.14*n;
    printf("%f\n",c);
}
int main()
{
    float n;
    printf("enter the radius\n");
    scanf("%f",&n);
    printf("diameter\n");
    diameter(n);
    printf("area of circle\n");
    area(n);
    printf("circumference of circle\n");
    circumference(n);
}
