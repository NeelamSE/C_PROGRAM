#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if((n>=65 && n<=90)||(n>=97 && n<=122))
    {
        printf("character is alphabet");
    }
    else
    {
        printf("character is not a alphabet");
    }
    return 0;
}
