// with return type and no argument

#include<stdio.h>
#include<conio.h>
int comp();
void main()
{
 int s;
  clrscr();
  s=comp();
  getch();

}

int comp()
{
  int x,y;
  printf("enter two numbers :");
  scanf("%d%d",&x,&y);

 if(x>y)
 {
 printf("value of x is greater ");
 return x;
 }
 else
 {
 printf("value of y is greater ");
 return y;
 }

}