//pointer - with return type and argument

#include<stdio.h>
#include<conio.h>
int ptr(int,int);
void main()
{
int a,b,*p,*p1;
int s;
  clrscr();
printf("enter two numbers for addition :");
scanf("%d%d",&a,&b);
p=&a;
p1=&b;
 s=ptr(*p,*p1);
  getch();
}
 int ptr(int x,int y)
 {
 int c;
c=x+y;
printf("addition is : %d",c);
 }