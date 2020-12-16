//switch case - no return type with argument

#include<stdio.h>
#include<conio.h>
void swch();
void main()
{
int num=0;
clrscr();
printf("enter number :");
scanf("%d",&num);
swch(num);
getch();
}

void swch(int n)
{
switch(n)
{
case 10:
printf("enter number is equal to 10 ");
break;
case 20:
printf("enter number is equal to 20 ");
break;
default:
printf("enter number is not equal to 10 and 20 ");
}
}