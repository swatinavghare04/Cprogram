//1. create a structure employee having members empno,empname,designation,salary;

#include<stdio.h>
#include<conio.h>
struct employee
{
int empno;
float salary;
char empname[20],designation[20];
}emp;
void main()
{
clrscr();
printf("\nenter the employee number:");
scanf("%d",emp.empno);
printf("\nenter the employee name : ");
scanf("\n%s",&emp.empname);
printf("\nenter the employee designation : ");
scanf("\n%s",&emp.designation);
printf("\nenter the salary : ");
scanf("\n%f",&emp.salary);
printf("\nemployee number is %d",emp.empno);
printf("\nemployee name is :%s",emp.empname);
printf("\nemployee designation is : %s",emp.designation);
printf("\nemployee salary is :%f",emp.salary);
getch();

}
