//creat a structure student having members rno,name,address;
// pass this structure to function to display thee structure member value;

#include<stdio.h>
#include<conio.h>
void display(struct student);
struct student
{
int rno;
char name[10],address[10];
};
void main()
{
struct student s1;
clrscr();
printf("\nenter the roll number of student :");
scanf("%d",&s1.rno);
printf("\nenter the name of student: ");
scanf("%s",&s1.name);
printf("\nenter the address of student :");
scanf("%s",&s1.address);
display(s1);
getch();
}
void display(struct student s2)
{
printf("\nroll number of student is : %d",s2.rno);
printf("\nname of the student is : %s",s2.name);
printf("\naddress of student is %s",s2.address);
}