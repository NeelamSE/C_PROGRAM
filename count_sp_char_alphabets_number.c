#include<stdio.h>
#include<string.h>
int main()
{
	int n;
    printf("enter the number of string you want\n");
    scanf("%d",&n);
    char s[20];
    printf("enter the string\n");
    scanf("%s",s);
    int p=strlen(s);
    int alp=0;
    int digit=0;
    int sp=0;
    for(int i=0;i<p;i++)
    {
    if((s[i]>=65&& s[i]<=90)||(s[i]>=97&& s[i]<=122))
	{
		alp++;
		}
	else if(s[i]>=48 && s[i]<=57)
	{
		digit++;
		}
		else
		{
			sp++;
			}	
	}
	printf(" alphate = %d\n",alp);
	printf(" digit = %d\n",digit);
	printf(" special char =%d\n",sp);
	
	return 0;
}
