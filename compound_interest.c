#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci;
    printf("entre the principal \n");
    scanf("%f",&p);
    printf("entre the time in year \n");
    scanf("%f",&t);
    printf("entre the rate\n");
    scanf("%f",&r);
    
    ci=p*(pow(1+(r/100) , t));
    printf("compond interest is equal to %f",ci);
    
    return 0;
    
}
