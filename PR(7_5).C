#include<stdio.h>
#include<conio.h>
main()
{
    int n,rev=0,temp;
    clrscr();
    printf("enter number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
      rev=rev*10+temp%10;
      temp/=10;
     }
     printf("%d",n,rev);
     if(n==rev)
     {
      printf("  number is a palindrome number",n);
      }
      else
      {
       printf("  number is not a palindrome number",n);
       }
       getch();
     getch();
}