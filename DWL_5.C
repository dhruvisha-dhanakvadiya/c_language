#include<stdio.h>
#include<conio.h>
main()
{
 int a,n;
 clrscr();
 a=1;
 printf("enter the value of n :");
 scanf("%d",&n);
 printf("enter the odd number from 1 to n is:\n",n);
 do
 {
    if(a%2!=0)
    printf("%d\t",a);
    a++;
    }
    while(a<=n);
    getch();

}