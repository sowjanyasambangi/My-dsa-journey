#include<stdio.h>
#include<conio.h>
main()
{
  int a[100],i,pos,item,size;
  printf("enter size\n");
  scanf("%d",&size);
  printf("enter array elements\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter position\n");
  scanf("%d",&pos);
  if(pos<=0||pos>size)
  {
    printf("invalid input");
  }
  else
  {
    for(i=pos-1;i<=size-1;i++)
    {
      a[i]=a[i+1];
    }
    size--;
  }
  printf("after deletion of elemets");
  for(i=0;i<size;i++)
  {
    printf("%d\n",a[i]);
  }
  getch();
}
