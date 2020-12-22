// write a program to read content from the file using fscanf function;

#include<stdio.h>
#include<conio.h>
void  main()
{
FILE *fp;
char ch[100];
clrscr();
fp=fopen("c:/temp/sample12.txt","r");
while(fscanf(fp,"%s",ch)!=EOF)
{
printf("%s",ch);
}
fclose(fp);
getch();
}