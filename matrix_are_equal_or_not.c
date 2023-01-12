#include <stdio.h>

int main()
{
  int n,m,d=0;
  printf("entre the number of row and colum\n");
  scanf("%d %d",&n,&m);
  int a[n][m],b[n][m];
  printf("entre the 1st matrix\n");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]); 
      }
  }
printf("entre the 2nd matrix\n");
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
         scanf("%d",&b[i][j]); 
      }
  }
  for(int i=0;i<n;i++)
  {  
      for(int j=0;j<n;j++)
      {
          if(a[i][j]!=b[i][j])
          {
           d=0;
           
          }
          else
          {
              d=1;
              
          }
      }
  }
  
  if(d==1)
  {
      printf("matrix are equal"); 
  }
  else
  {
      printf("matrix are not equal");
  }
         
    return 0;
}

