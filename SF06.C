//create a structure customer having members custid,custname,custaddress,mno.
//create a function getdata to accept the structure and showdata to display the structure;

#include<stdio.h>
#include<conio.h>
void showdata(struct customer *);

struct customer
{
int custid;
char custname[20],custaddress[20],mno[10];
};

void main()
{
struct customer c1;
clrscr();
printf("enter the customer id :");
scanf("%d",&c1.custid);
printf("\nenter the customer name :");
scanf("%s",&c1.custname);
printf("\nenter the customer address :");
scanf("%s",&c1.custaddress);
printf("\nenter customer mobile  number is :");
scanf("%s",&c1.mno);
showdata(&c1);
getch();
}

void showdata(struct customer *c3)
{
printf("\ncustomer id is :%d ",c3->custid);
printf("\ncustomer name is :%s ",c3->custname);
printf("\ncustomer address is :%s",c3->custaddress);
printf("\nmobile number : %s",c3->mno);
}