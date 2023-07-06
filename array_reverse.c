#include<stdio.h>
#include<conio.h>
main()
{
  int a[100],n,i;
  printf("enter size\n");
  scanf("%d",&n);
  printf("enter elements into array");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("reverse of array\n");
  for(i=n-1;i>=0;i--)
  {
    printf("%d\n",a[i]);
  }

}
