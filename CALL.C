#include<stdio.h>
#include<conio.h>
main()
{
	 int a,b,c,n;
	 clrscr();
	 printf("enter 1 to set calltune\n");
	 printf("enter 2 for check balance recharge\n");
	 printf("enter 3 for any other help\n");
	 printf("enter your choice:\n");
	 scanf("%d",&n);
	 clrscr();
	 switch(n)
	 {
	  case 1:
		 printf("press 1 for ram siya ram\n");
		 printf("press 2 for namo namo shankara\n");
		 printf("press 3 for hanuman chalisa\n");
		 printf("press 4 for bhajan\n");
		 printf("enter your choice:\n");
		 scanf("%d",&a);
	  break;

	  case 2:
		  printf("press 1 to know your balance\n");
		  printf("press 2 for discount in recharge\n");
		  printf("press 3 for new plans\n");
		  printf("enter your choice:\n");
		  scanf("%d",&b);
	 break;

	 case 3:
		 printf("press 1 for check your bank balance\n");
		 printf("press 2 for credit card\n");
		 printf("press 3 to check credit card balance\n");
		 printf("enter your choice:\n");
		 scanf("%d",&c);

	    break;
  }
   getch();
}