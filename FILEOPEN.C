// write a program to create a file

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
clrscr();
fopen("C:/temp/sample12.txt","w");
printf("hello swati; how are you?");
fclose(fp);
getch();
}