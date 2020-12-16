// if else ladder - with return type and no argument


#include<stdio.h>
#include<conio.h>
int sss();
void main()
{
int t;
clrscr();
t=sss();
printf("%d",t);
getch();
}

int sss()
{
int a,b,c;
printf("enter three numbers :");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
{
return a;
}
else if(b>c && b>a)
{
return b;
}
else  if(c>a && c>b)
{
return c;
}
else
{
return 0;
}
}