#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t,si;
    
    printf("entre the principa\n");
    scanf("%d",&p);
    printf("entre the time in year\n");
    scanf("%d",&t);
    printf("entre the rate \n");
    scanf("%d",&r);
    
    si=(p*r*t)/100;
    printf("simple interst is equal to %d",si);
    
    return 0 ;
    
    
}
