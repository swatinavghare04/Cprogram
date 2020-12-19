//create a structure customer having members custid,custname,custaddress,mno.

#include<stdio.h>
#include<conio.h>
struct customer
{
int custid;
char custname[20],custaddress[20],mno[10];
}c;

void main()
{
clrscr();
printf("enter the customer id :");
scanf("%d",&c.custid);
printf("\nenter the customer name :");
scanf("%s",&c.custname);
printf("\nenter the customer address :");
scanf("%s",&c.custaddress);
printf("\nenter customer mobile  number is :");
scanf("%s",&c.mno);
printf("\ncustomer id is :%d ",c.custid);
printf("\ncustomer name is :%s ",c.custname);
printf("\ncustomer address is :%s",c.custaddress);
printf("\nmobile number : %s",c.mno);
getch();
}