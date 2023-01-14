#include<stdio.h>
int main()
{
    int n;
    printf("how many number you want in array\n");
    scanf("%d",&n);
    int a[n];
    int *p=&a[0];
    printf("enter the number\n");
    for(int i=0;i<n;i++)
    {
       
        
            scanf("%d",p+i);
        
    } 
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(*(p+j)>*(p+j+1))
            {           
               int swap=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=swap;
            }
        }
    }
    
     printf("after sorting\n");
     for(int i=0;i<n;i++)
     printf("%d ",*(p+i));
   return 0;
}
