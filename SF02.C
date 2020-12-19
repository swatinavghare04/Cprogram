//1. create a structure employee having members empno,empname,designation,salary;
// pass this structure to function to display the structure member values;

#include<stdio.h>
#include<conio.h>
void display(struct employee);
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
scanf("%d",&emp.empno);
printf("\nenter the employee name : ");
scanf("\n%s",&emp.empname);
printf("\nenter the employee designation : ");
scanf("\n%s",&emp.designation);
printf("\nenter the salary : ");
scanf("\n%f",&emp.salary);
display(emp);
getch();
}

void display(struct employee e1)
{
printf("\nemployee number is %d",e1.empno);
printf("\nemployee name is :%s",e1.empname);
printf("\nemployee designation is : %s",e1.designation);
printf("\nemployee salary is :%f",e1.salary);
}
