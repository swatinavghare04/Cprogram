//1. create a structure student having members rno,name,address;

#include<stdio.h>
#include<conio.h>
struct student
{
int rno;
char name[20],address[20];
}std1;
void main()
{
clrscr();
printf("\nenter the roll number: ");
scanf("%d",&std1.rno);
printf("\nenter the name and address of student : ");
scanf("\n%s%s",&std1.name,&std1.address);
printf("\nstudent roll number is :%d",std1.rno);
printf("\nstudent name is :%s",std1.name);
printf("\nstudent address is : %s",std1.address);
getch();

}