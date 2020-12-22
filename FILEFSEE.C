
// write a program to set pointer to 8 position and write some text using feek function;

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
clrscr();

fp=fopen("c:/temp/sample12.txt","w");
fputs("How are you swati ",fp);
fseek(fp,8,SEEK_SET);
fputs("sonu",fp);
fclose(fp);

getch();
}
