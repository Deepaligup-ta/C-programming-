#include <stdio.h>

int main()
{
  int n,i,j;
  printf("Enter the no. of elements of array:");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of array:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  int count=1;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(a[i]==a[j] && i!=j)
          break;
      }
      if(j==n)
      {
          printf("\nunique elements in an array is [%d]:%d \n",count,a[i]);
          ++count;
      }
      
  
  }

    return 0;
}

