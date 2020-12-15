//pointer - no return type, with argument

#include<stdio.h>
#include<conio.h>
void ptr(int,int);
void main()
{
int a,b,*p,*p1;
  clrscr();
printf("enter two numbers for addition :");
scanf("%d%d",&a,&b);
p=&a;
p1=&b;
  ptr(*p,*p1);
  getch();
}
 void ptr(int x,int y)
 {
 int add;
add=x+y;
printf("Addition is : %d",add);
 }