#include<stdio.h>
#include<conio.h>
main()
{
   int n;
   clrscr();
   printf("press 1 for january\n");
   printf("press 2 for february\n");
   printf("press 3 for march\n");
   printf("press 4 for april\n");
   printf("press 5 for may\n");
   printf("press 6 for june\n");
   printf("press 7 for july\n");
   printf("press 8 for august\n");
   printf("press 9 for september\n");
   printf("press 10 for october\n");
   printf("press 11 for november\n");
   printf("press 12 for december\n");
   printf("enter your choice:");
   scanf("%d",&n);
   clrscr();
   switch(n)
   {
    case 1:
	   printf("first month is january");
      break;
    case 2:
	   printf("second month is february");
      break;
    case 3:
	   printf("third month is march");
      break;
    case 4:
	   printf("fourth month is april");
      break;
    case 5:
	   printf("fifth month is may");
      break;
    case 6:
	   printf("sixth month is june");
      break;
   case 7:
	  printf("seventh month is july");
      break;
   case 8:
	  printf("eighth month is august");
      break;
   case 9:
	  printf("ninth month is september");
      break;
   case 10:
	   printf("tenth month is october");
      break;
   case 11:
	   printf("eleventh month is november");
      break;
   case 12:
	   printf("twelth month is december");
      break;
      default:
	   printf("invalid choice");
  }
  getch();
}


