#include<stdio.h>
#include<conio.h>
main()
{
   int n;
   clrscr();
   printf("enter number:");
   scanf("%d",&n);
   if(n%2==0)
   {
    printf("this is even number\n");
    }
    else
    {
     printf("this is odd number\n");
     }
     getch();
}