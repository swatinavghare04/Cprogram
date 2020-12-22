
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
clrscr();

fp=fopen("c:/temp/emp.txt","w");
fputs("hello swati ",fp);
fclose(fp);
getch();
}