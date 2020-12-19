// create a structure department having members deptid,depname.

#include<stdio.h>
#include<conio.h>

struct department
{
int  deptid;
char depname[20];

}depts;

void main()
 {
 clrscr();
 printf("enter the department id :");
 scanf("%d",&depts.deptid);
 printf("enter the name of department :");
 scanf("%s",&depts.depname);
 printf("\ndepartment id is : %d",depts.deptid);
 printf("\ndepartment name is : %s",depts.depname);
 getch();

}