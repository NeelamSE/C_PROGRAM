#include<stdio.h>
#include<math.h>
int main()
{
    float area,s;
    printf("entre the side of equilateral triangle \n");
    scanf("%f",&s);
    
    area=(s*s*sqrt(3))/4;
    
    printf("are of equilateral triangle is equal to %f",area);
    
    return 0;
    
}

