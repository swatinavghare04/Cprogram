#include<stdio.h>
#include<conio.h>
void main()
{
int emp_id=5612,hrs=50,amt=500;
float sal;
clrscr();
printf("enter the employee id : %u\n",emp_id);
printf("enter the total hours worked : %d\n ",hrs);
printf("enter the amount he received per hour : %d\n ",amt);
sal=amt*hrs;
printf("salary is :%.2f",sal);
getch();

}