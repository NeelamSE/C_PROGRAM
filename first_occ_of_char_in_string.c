#include <stdio.h>

int main()
{   
    
    char s[20];
    printf("enter string\n");
    fgets(s,20,stdin);
    int i=0;
    char c;
    scanf("%c",&c);
    while(s[i]!='\0')
    {
        if(c==s[i]) 
        {
            printf("character at position = %d",i+1);
            
        }
        else
        {
            printf("character not found");
        }
       
        i++;
    }
 
    return 0;
}

#include <stdio.h>

int main()
{   
    
    char s[20];
    printf("enter string\n");
    fgets(s,20,stdin);
    int i=0;
    char c;
    scanf("%c",&c);
    while(s[i]!='\0')
    {
        if(c==s[i]) 
        {
            printf("character at position = %d",i+1);
            
        }
        else
        {
            printf("character not found");
        }
       
        i++;
    }
 
    return 0;
}

