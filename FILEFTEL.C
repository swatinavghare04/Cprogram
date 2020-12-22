// write a program showing ftell function

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
int length;
clrscr();
fp=fopen("c:/temp/sample12.txt","r");
fseek(fp,0,SEEK_END);
length=ftell(fp);
fclose(fp);
printf("size of the file:%d",length);
getch();

}