//program to write some text to the file using fprintf function

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
int id;
char name[10];
float salary;
clrscr();
printf("enter the id,name,salary : ");
scanf("%d%s%f",&id,&name,&salary);
fp=fopen("c:/temp/emp.txt","a");
fprintf(fp,"employee details : ");
fprintf(fp,"\n employee id %d",id);
fprintf(fp,"\n name %s",name);
fprintf(fp,"\n salary %f",salary);
fclose(fp);
getch();
}