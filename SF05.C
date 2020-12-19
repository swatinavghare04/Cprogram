//create a structure customer having members custid,custname,custaddress,mno.
//create a function getdata to accept the structure and showdata to display the structure;

#include<stdio.h>
#include<conio.h>
struct customer getdata(struct customer);
void showdata(struct customer);

struct customer
{
int custid;
char custname[20],custaddress[20],mno[10];
};

void main()
{
struct customer c1,cu;
clrscr();
cu=getdata(c1);
showdata(cu);
getch();
}

struct customer getdata(struct customer c2)
{
printf("enter the customer id :");
scanf("%d",&c2.custid);
printf("\nenter the customer name :");
scanf("%s",&c2.custname);
printf("\nenter the customer address :");
scanf("%s",&c2.custaddress);
printf("\nenter customer mobile  number is :");
scanf("%s",&c2.mno);
return c2;
}

void showdata(struct customer c3)
{
printf("\ncustomer id is :%d ",c3.custid);
printf("\ncustomer name is :%s ",c3.custname);
printf("\ncustomer address is :%s",c3.custaddress);
printf("\nmobile number : %s",c3.mno);
}