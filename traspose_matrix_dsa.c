#include<stdio.h>
#include<conio.h>
main()
{
  int a[10][10],r,c,i,j;
  printf("enter the number of rows and columns\n");
  scanf("%d\n %d",&r,&c);
  printf("enter values into matrix a\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("printing the matrix\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
printf("after trasposing the matrix\n");
for(i=0;i<c;i++)
{
  for(j=0;j<r;j++)
  {
    printf("%d\t",a[j][i]);
  }
  printf("\n");
}
getch();
}
