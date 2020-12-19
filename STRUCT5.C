

//1. create a structure product having members prodid,prodname,prodrate,quantity.

#include<stdio.h>
#include<conio.h>
struct product
{
int prodid,prodrate,quantity;
char prodname[20];
}prodt;
void main()
{
clrscr();
printf("\nenter product id :");
scanf("%d",&prodt.prodid);
printf("\nenter the product name : ");
scanf("\n%s",&prodt.prodname);
printf("\nenter the product rate : ");
scanf("\n%d",&prodt.prodrate);
printf("\nenter the product quantity : ");
scanf("\n%d",&prodt.quantity);
printf("\n product id : %d",prodt.prodid);
printf("\nproduct name is :%s",prodt.prodname);
printf("\nproduct rate is : %d",prodt.prodrate);
printf("\nproduct quantity is :%d",prodt.quantity);
getch();

}
