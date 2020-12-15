//no return type and with argument
//no return type and with argument

#include<stdio.h>
#include<conio.h>
void add();
void main()
{
int a,b;
clrscr();
printf("enter the two numbers : ");;
scanf("%d%d",&a,&b);
add(a,b);
getch();

}
void add(int x,int y)
{
int c;
c=x+y;
printf("addition is : %d",c);
}
