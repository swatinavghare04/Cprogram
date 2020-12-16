// if else ladder - with return type and with argument


#include<stdio.h>
#include<conio.h>
int sss(int,int,int);
void main()
{
int a,b,c,t;
clrscr();
printf("enter three numbers :");
scanf("%d%d%d",&a,&b,&c);
t=sss(a,b,c);
printf("%d",t);
getch();
}

int sss(int x,int y,int z)
{

if(x>y && x>z)
{
return x;
}
else if(y>z && y>x)
{
return y;
}
else  if(z>x && z>y)
{
return z;
}
else
{
return 0;
}
}