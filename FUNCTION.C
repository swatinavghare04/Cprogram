#include<stdio.h>
#include<conio.h>
void Add();
void Sub();
void Mul();
void Div();
void main()
{
int i;
clrscr();
printf("Enter any  option from the below one : ");
printf("\n 1. addition, \n2. substraction, \n3. multiplication, \n4.division ");
printf("\nenter your option :");
scanf("%d", &i);
switch(i)
{
case 1: Add();
break;
case 2: Sub();
break;
case 3: Mul();
break;
case 4:Div();
break;
default:
printf("None of the above");
}
getch();
}
void Add()
{
int a=5, b=6;
int add;
add=a+b;
printf("Addition of two numbers is : %d\n",add);
}
void Sub()
{
int d=8,e=2;
int sub;
sub=d-e;
printf("substraction is : %d\n",sub);
}
void Mul()
{
int f=5,d=3;
int mul;
mul=f*d;
printf("Multiplication is %d\n",mul);
}
void Div()
{
int a=10, b=5;
int div;
div=a/b;
printf("\nDivision is %d",div);
}





