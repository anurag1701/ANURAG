#include <stdio.h>
int main()
{
  int a[20];
  int n,i,j,temp,key;
  int first,mid,last;
  printf("enter size of array:");
  scanf("%d",&n);
  printf("enter %d elements:",n);
  for(i=0;i<n;i++);
  {
    scanf("%d",a[i]);
  }
  printf("the elements of array before sorting is.....\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1-i;j++)
        {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
    }
  printf("\n\n the sorted array is....\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  printf("\n\n enter the elements to be sorted;");
  scanf("%d",&key);
  first=0;
  last=n-1;
  while(first<=last)
    {
      mid=(first+last)/2;
      if(key==a[mid])
      {
        printf("\n the elements %d is found at location %d\n",key,mid+1);
        return 0;
    }
      else if(key<a[key])
      {
        last=mid-1;
      }
      else
      {
        first=mid+1;
      }
   }
  printf("\n the elements %d is not found in array\n",key);
  return 1;
  }
