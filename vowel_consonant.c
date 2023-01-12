#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c==65||c==69||c==73||c==81||c==85||c==97||c==101||c==105||c==112||c==116)
    {
        printf("vowel");
    }
    else
    {
       printf("consonant");
    }
    return 0;
}
