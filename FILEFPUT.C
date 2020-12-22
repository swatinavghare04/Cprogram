 // wite a program to read and write using fputs and fgets function;

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char text[400];
clrscr();

fp=fopen("c:/temp/sample12.txt","w");
fputs("How are you swati ",fp);
fclose(fp);

fp=fopen("c:/temp/sample12.txt","r");
printf("%s",fgets(text,200,fp));
fclose(fp);
getch();
}