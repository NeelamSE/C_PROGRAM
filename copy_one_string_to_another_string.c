#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   printf("size of array");
   scanf("%d",&n);
   char s[n],s2[n];
   scanf("%s",s);
   strcpy(s2,s); 
   printf("%s",s2);
   
    return 0;
}
