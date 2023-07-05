#include<stdio.h>
#include<conio.h>
main()
{
  int a[10];
  int i,n,key,flag=0;
  printf("enter size\n");
  scanf("%d",&n);
  printf("enter the number of elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter search element\n");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(a[i]==key)
    {
      flag=1;
      printf("element found");
      break;
    }
  }
  if(flag==0)
  {
    printf("element not found");
  }
  getch();
}
