//program to write some text to the file using fprintf function

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch[255];
clrscr();
fp=fopen("c:/temp/sample.txt","r");
while(fscanf(fp,"%s",ch)!=EOF)
{
printf("%s",ch);
}
fclose(fp);
getch();
}