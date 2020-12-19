//create a structure customer having members custid,custname,custaddress,mno;
//create a array of structure of 5 elements;

#include<stdio.h>
#include<conio.h>

struct customer
{
int custid;
char custname[20],custaddress[20],mno[10];

};

void showarray(struct customer c1[5])
{
int i;
for(i=0;i<5;i++)
{
printf("\ncustomer id is :%d ",c1[i].custid);
printf("\ncustomer name is :%s ",c1[i].custname);
printf("\ncustomer address is :%s",c1[i].custaddress);
printf("\nmobile number : %s",c1[i].mno);
}
}

void main()
{
struct customer c1[5];
int i;
clrscr();
for(i=0;i<5;i++)
{
printf("\nenter the customer id :");
scanf("%d",&c1[i].custid);
printf("\nenter the customer name :");
scanf("%s",&c1[i].custname);
printf("\nenter the customer address :");
scanf("%s",&c1[i].custaddress);
printf("\nenter customer mobile  number is :");
scanf("%s",&c1[i].mno);
}
showarray(c1);
getch();
}



