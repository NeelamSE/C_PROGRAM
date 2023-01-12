
#include <stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    if((n>=67 && n<=90)||(n>=97 && n<=122))
    {
        printf("alphabet");
    }
else if((n>=32 && n<=47)||(n>=58 && n<=64)||(n>=91 && n<=96)||(n>=123 && n<=126))
    {
       printf ("special character"); 
    }
else if (n>=48 && n<=57){
    printf("digit");
}
else{
    printf("no alphabet/special character/digit");
}
    return 0;
}

