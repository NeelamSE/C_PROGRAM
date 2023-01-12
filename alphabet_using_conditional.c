
#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    (((a>=65 && a<=90) || (a>=97 && a<=122))?printf("alphabet"):printf("not a alphabet"));

    return 0;
}

