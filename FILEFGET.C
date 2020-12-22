// write a program to read and write using fputc and fgetc function;

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("c:/temp/sample12.txt","w");
fputs("hello swati ",fp);
 fclose(fp);
fp=fopen("c:/temp/sample12.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
getch();
}