
// no retuen type and with argument

#include<stdio.h>
#include<conio.h>
void comp();
void main()
{
 int a=2,b=5;
  clrscr();
  comp(a,b);
  getch();

}
void comp(int x, int y)
{

 if(x>y)
 {
 printf("value of a is greater :");
 }
 else
 {
 printf("value of b is greater :");
 }

}