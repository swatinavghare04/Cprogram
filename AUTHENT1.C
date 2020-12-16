// authentication - if invalid gain show the login in option

#include<stdio.h>
#include<conio.h>
void logsuc();
void inval();
void logchk();
void main()
{
char s;
clrscr();
logchk();
printf("try again ? enter (Y/N):");
fflush(stdin);
scanf("%c",&s);
switch(s)
{
case 'Y': logchk();
	  break;
case 'N': printf("Thank you for the login ");
	   break;
default : printf("entered choice is not match ");
}
 getch();
}
void logchk()
{
char username[10];
char password[10],u1[10]={"ram"},ps[10]={"ram"},ch;
int i;
clrscr();
printf("enter the username :");
scanf("%s",&username);
printf("enter the password :");
for(i=0;i<10;i++)
{
ch=getch();
password[i]=ch;
if(ch!='\r')
{
printf("*");
}
if(ch=='\r')
{
break;
}
}
password[i]='\0';
if(strcmp(username,u1)==0 && strcmp(password,ps)==0)
{
  logsuc();
}
else
{
  inval();
}


}
void logsuc()
{
 printf("\nyou are login successfully ");
}
 void inval()
 {
   printf("\ninvalid credentials ");
 }
