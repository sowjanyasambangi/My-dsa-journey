#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("the address of a=%d\n",&a);
  int* p=&a;
  printf("value of pointer=%d",p);
}
