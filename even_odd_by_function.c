#include<stdio.h>
#include<stdbool.h>
bool evenodd(int n)
{

if(n%2==0)
 return true;
    
return false;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(evenodd(n)==true)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}
