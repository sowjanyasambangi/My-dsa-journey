#include<stdio.h>
#include<conio.h>
main()
{
int a[50],i,n;
printf("enter size\n");
scanf("%d",&n);
printf("enter elements into array\n");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
  printf("even numbers in the given array are\n");
for(i=0;i<n;i++)
{
  if(a[i]%2==0)
  {
    printf("%d\n",a[i]);
  }
}
  printf("odd numbers in the given array are\n");
for(i=0;i<n;i++)
{
  if(a[i]%2!=0)
  {
    printf("%d\n",a[i]);
  }
}
getch();



}
