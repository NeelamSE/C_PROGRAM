#include <stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    int n;
    int b;
    int max=INT_MIN;
    int min=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b); 
        if(b>max) 
        {
            max=b;
        }
        
        if(b<min)  
        {
            min=b;
        } 
    }
    printf("max =%d \n",max);
    printf("min =%d",min);
    
    return 0;
}

