#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,i,j;
 clrscr();
 printf("enter the value of a:");
 scanf("%d",&a);
 printf("enter the value of b:");
 scanf("%d",&b);
 for(i=a;i<=b;i++)
 {
  for(j=1;j<10;j++)
  {
   printf("%d x %d=%d\n",i,j,i*j);
   }
   printf("\n");
   printf("**************\n");
   }
   getch();

}