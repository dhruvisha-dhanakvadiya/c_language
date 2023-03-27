#include<stdio.h>
#include<conio.h>
main()
{
      int a;
      clrscr();
      printf("enter 1 for monday\n");
      printf("enter 2 for tuesday\n");
      printf("enter 3 for wednesday\n");
      printf("enter 4 for thursday\n");
      printf("enter 5 for friday\n");
      printf("enter 6 for saturday\n");
      printf("enter 7 for sunday\n");
       printf("enter your choice:");
      scanf("%d",&a);
      switch(a)
      {
	     case 1:
	       printf("monday...");
	     break;
	     case 2:
		  printf("tuesday...");
	     break;
	     case 3:
		   printf("wednesday...");
	     break;
	     case 4:
		    printf("thursday...");
	     break;
	     case 5:
		    printf("friday...");
	     break;
	     case 6:
		    printf("saturday...");
	     break;
	     case 7:
		     printf("sunday...");
       }
	     getch();


}




