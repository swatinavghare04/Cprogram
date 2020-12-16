// switch case - with no return type and no argument

#include<stdio.h>
#include<conio.h>
void swch();
void main()
{
clrscr();
swch();
getch();
}

void swch()
{
int num=0;
printf("enter number :");
scanf("%d",&num);
switch(num)
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