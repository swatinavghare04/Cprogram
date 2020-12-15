//pointer - with return type and no argument

#include<stdio.h>
#include<conio.h>
int ptr();
void main()
{
int s;
  clrscr();
 s=ptr();
 printf("%d",s);
  getch();
}
 int ptr()
 {
 int a,b,*p,*p1;
 int c;
 printf("enter two numbers for addition :");
scanf("%d%d",&a,&b);
p=&a;
p1=&b
c=*p+*p1;
printf("addition is : %d",c);
 }