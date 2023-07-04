#include<stdio.h>
#include<conio.h>
main()
{
  int a[50][50],i,j,r,c,sum=0;
  printf("enter number of rows\n");
  scanf("%d",&r);
    printf("enter number of columns\n");
    scanf("%d",&c);
  printf("enter elements into matrix\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i==j)
      sum=sum+a[i][j];
    }
  }
  printf("sum of diagonals of square matrix:sum=%d\n",sum);
  getch();
}
