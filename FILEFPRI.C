//write a program to write some text to file using fprintf;

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
clrscr();
fp=fopen("c:/temp/sample12.txt","w");
fprintf(fp,"this is a sample text\n");
fclose(fp);
printf("\n data written to file ");
getch();
}