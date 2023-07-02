#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],i,size,key;
  printf("enter size\n");
  scanf("%d",&size);
  printf("enter array elements\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the search element\n");
  scanf("%d",&key);
  for(i=0;i<size;i++)
  {
    if(a[i]==key)
    {
      printf("element found");
      break;
    }
  }
  if(i>=size)
  {
    printf("element not found");
  }
  return 0;
}
