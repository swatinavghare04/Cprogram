// no return type and with argument

#include<stdio.h>
#include<conio.h>
void sss();
void main()
{
int a,b,c;
clrscr();
printf("enter three numbers :");
scanf("%d%d%d",&a,&b,&c);
sss(a,b,c);
getch();
}
void sss(int x,int y,int z)
{

if(x>y && x>z)
{
printf("a is greater %d",x);
}
else if(y>z && y>x)
{
printf("b is greater %d",y);
}
else  if(z>x && z>y)
{
printf("c is greater %d",z);
}

}