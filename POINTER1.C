// pointer - no retur type and no argument
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p,*p1,add;
clrscr();
printf("enter two numbers for addition :");
scanf("%d%d",&a,&b);
p=&a;
p1=&b;
add=*p+*p1;
printf("Addition is : %d",add);
  getch();
}
