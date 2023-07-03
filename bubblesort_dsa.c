#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],i,j,k,size,flag,temp;
  printf("enter size\n");
  scanf("%d",&size);
  printf("enter array elements\n");
  for(k=0;k<size;k++)
  {
    scanf("%d",&a[k]);
  }
  for(i=0;i<size-1;i++)
  {
    flag=0;
    for(j=0;j<size-1;j++)
    {
    if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      flag=1;
    }
    }
    if(flag==0)
    {
      break;
    }
  }
  printf("sorted array elements\n");
  for(k=0;k<size;k++)
  {
    printf("%d\n",a[k]);
  }
}
