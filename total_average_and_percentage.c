#include<stdio.h>
#include<math.h>
int main()
{
    float m1,m2,m3,m4,m5,total,perc,avg;
    printf("entre the marks of 5 subject out of 100\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=(total)/5;
    perc=(total)/5;
    
    printf("total of all marks are %f\n",total);
    printf("percentage of all marks are %f \n",perc);
    printf("average of all marks %f\n",avg);
    
    return 0;
    
}

