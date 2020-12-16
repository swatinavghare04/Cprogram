//switch case -  with return type and no argument

#include<stdio.h>
#include<conio.h>
int swch();
void main()
{
int s;
clrscr();
s=swch();
printf("%d",s);
getch();
}

int swch()
{
int num=0;
printf("enter number :");
scanf("%d",&num);
switch(num)
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