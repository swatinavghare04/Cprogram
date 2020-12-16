//switch case - with return type and argument

#include<stdio.h>
#include<conio.h>
int swch(int);
void main()
{
int num=0,s;
clrscr();
printf("enter number :");
scanf("%d",&num);
s=swch(num);
printf("%d",s);
getch();
}

int swch(int n)
{
switch(n)
{
case 10:
return 10;
break;
case 20:
return 20;
break;
default:
return 0;
}}