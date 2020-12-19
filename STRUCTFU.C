//example of structure passing argument as a function

#include<stdio.h>
#include<conio.h>
struct emp
{
int empno;
char empname[10];
};
// creating a function show
void show(struct emp e2)
{
printf("empno = %d",e2.empno);
printf("\n empname = %s",e2.empname);
}
//creating main method
void main()
{
struct emp e1;
clrscr();
e1.empno=202;
strcpy(e1.empname,"swati");
show(e1);
grtch();

}