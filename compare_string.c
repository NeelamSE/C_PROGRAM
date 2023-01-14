#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("size of string\n");
    scanf("%d",&n);
    char s[n],s2[n];
    printf("enter 1st string\n");
    scanf("%s",s);
    printf("enter 2nd string\n");
    scanf("%s",s2);
    printf("%d",strcmp(s,s2));
} 
