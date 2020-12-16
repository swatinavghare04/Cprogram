//if else ladder - with no return type and no argument

#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
clrscr();
fun();
getch();
}

void fun()
{
int a,b,c;
printf("enter the numbers ");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
 printf("a is greater : %d",a);

}
else if(b>c && b>a)
{
printf("b is greater: %d",b);
}
else if(c>a && c>b)
{
printf("c is greater : %d",c);
}
else
{
printf("none of the above condition is match ");
}
}