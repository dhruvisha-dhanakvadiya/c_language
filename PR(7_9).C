#include<stdio.h>
#include<conio.h>
main()
{
       int num,rev=0,a,b,rem,sum=0,copy;
       clrscr();
       printf("enter the number:");
       scanf("%d",&num);
       copy=num;
       while(num!=0)
       {
	 rem=num%10;
	 rev=rev*10+rem;
	 num=num/10;
	 sum=sum+rem;
	 }
	 if(rev*sum==copy)
	 {
	  printf("this is magic number");
	  }
	  else
	  {
	   printf("this is not magic number");
	   }
	   getch();
	   }