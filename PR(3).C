#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);

	if(a>=b && a>=c)
	{
	    printf("a is maximum...");
	 }
	 else if(b>=a && b>=c)
	 {
	    printf("b is maximum...");
	 }
	 else if(c>=a && c>=b)
	 {
	    printf("c is maximum...");
	 }
	  getch();
}
