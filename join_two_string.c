#include<stdio.h>
#include<string.h>

int main()
{
   int n;
   printf("size of string\n");
   scanf("%d",&n);
   char s[n],s2[n];
   printf("enter the string\n");
   scanf("%s",s);
   printf("enter second string\n");
   scanf("%s",s2);
   char* a=strcat(s,s2);
   printf("%s",a);
   
    return 0;
}

