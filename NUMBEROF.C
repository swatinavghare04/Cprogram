#include<stdio.h>
#include<conio.h>
void main()
{
char s[6];
int i, k=0;
clrscr();
printf("enter any string : ");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
printf(" %c",s[i]);

if(s[i]=='s')
{
 k++;
}

}
printf("\ncount : %d",k);
 getch();
}