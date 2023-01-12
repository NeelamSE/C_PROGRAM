#include <stdio.h>
int main()
{
   int n,count;
   scanf("%d",&n);
   int a[n],b[n];
   int v=-1;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   for(int i=0;i<n;i++)
   { count=1;
       for(int j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
           count++;
           b[j]=v;}
       }
       
       if(b[i]!=v)
       {
           b[i]=count;
       }
   }
  for(int i=0;i<n;i++)
  {
      if(b[i]!=v)
      {
          printf("the frequency of %d is = %d \n",a[i],b[i]);
      }
  }
   
   
   
    return 0;
}

