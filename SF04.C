// create a structure department having members deptid,depname.
//creat function getdata to accept structure and showdata to display structure(example of function returning structure)

#include<stdio.h>
#include<conio.h>
struct department getdata(struct department);
void showdata(struct department);

struct department
{
int  deptid;
char depname[20];

};

void main()
 {
 struct department d1,dep;
 clrscr();
 dep=getdata(d1);
 showdata(dep);
  getch();
}

struct department getdata(struct department d2)
{
 printf("enter the department id :");
 scanf("%d",&d2.deptid);
 printf("enter the name of department :");
 scanf("%s",&d2.depname);
 return d2;
}

void showdata(struct department d3)
{
 printf("\ndepartment id is : %d",d3.deptid);
 printf("\ndepartment name is : %s",d3.depname);
}