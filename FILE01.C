//program to create a file using fopen function

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
clrscr();
fp=fopen("c:/temp/myfile.txt","w");
printf("file created or opened ");
fclose(fp);
getch();
}