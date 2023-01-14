#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the size of string\n");
    scanf("%d",&n);
    char s[n];
    printf("enter string\n");
    scanf("%s",s);
    int p=strlen(s);
    int vowel =0;
    int consonant=0;
    for(int i=0;i<p;i++)
    {
        if((s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117)||(s[i]==65||s[i]==70||s[i]==74||s[i]==80||s[i]==86))
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    printf("vowel=%d\n",vowel);
    printf("consonant=%d\n",consonant);
    
    
    return 0; 
}
