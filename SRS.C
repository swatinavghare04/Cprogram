// with return type and no argument
#include<stdio.h>
#include<conio.h>
int add();
void main()
{
int s;
clrscr();
s=add();
printf("%d",s);
getch();

}
int add()
{
int a,b;
printf("enter two  numbers :");
scanf("%d%d",&a,&b);
printf("addition is: ");
return(a+b);
}

