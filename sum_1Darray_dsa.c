#include<stdio.h>
#include<conio.h>
int main()
{
   int a[50],i,n,sum=0;
      printf("enter the size of array\n");
      scanf("%d",&n);
      printf("enter elements into array\n");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
          sum=sum+a[i];
        }
      printf("sum of elements=%d",sum);
      getch();
      return 0;
  }
