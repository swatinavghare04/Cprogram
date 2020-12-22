
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();

fp=fopen("c:/temp/emp.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
getch();
}