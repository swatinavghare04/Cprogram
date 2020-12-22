// write a program to read the same file two times using rewind function;

#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("c:/temp/swatifile.txt","w");
printf("how are you swati");
fclose(fp);
fp=fopen("c:/temp/swatifile.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
rewind(fp); //moves the file pointer at beginning of the file

while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
getch();
}