#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("enter string\n");
    fgets(s,50,stdin);
    int i=0;
    int count=0;
    while(s[i]!='\0')
    {
        if(s[i]=='\n'||s[i]==' '||s[i]=='\t')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    
    
    return 0;
}
