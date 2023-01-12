
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=100)
    {
        if(n%2==0)
        {
            printf("n is greater than 100 and divisble by 2");
        }
        else
        {
            printf(" n is greater than 100 but not divisible by 2");
            
        }

    }   
else
{
    if(n%2==0)
    {
        printf("n is less than 100 and divisible by 2");
    }
    else
    {
        printf("n is less than 100 not divisible by 2");
    }
} 
    return 0;
}
