#include<stdio.h>
#include<conio.h>
main()
{
  int a=10,n;
  clrscr();
  printf("enter the value of n:");
  scanf("%d",&n);
  do
  {
  printf(" %d",n);
 n--;
  }

   while (n>=1);
 getch();
}
