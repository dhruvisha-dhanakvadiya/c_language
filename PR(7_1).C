#include<stdio.h>
#include<conio.h>
main()
{
 char i='a';
 printf("the lowercase alphabates:\n",i);
 scanf("%c",&i);
 do
 {
   printf("\t%c",i);
   i++;
 }
  while(i<='z');
  getch();


}