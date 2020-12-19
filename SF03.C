
//1. create a structure product having members prodid,prodname,prodrate,quantity.
//pass this structure to function to display the structure members value;
#include<stdio.h>
#include<conio.h>
void display(struct product);
struct product
{
int prodid,prodrate,quantity;
char prodname[20];
};
void main()
{
struct product p1;
clrscr();
printf("\nenter product id :");
scanf("%d",&p1.prodid);
printf("\nenter the product name : ");
scanf("\n%s",&p1.prodname);
printf("\nenter the product rate : ");
scanf("\n%d",&p1.prodrate);
printf("\nenter the product quantity : ");
scanf("\n%d",&p1.quantity);
display(p1);
getch();

}

void display(struct product p2)
{
printf("\n product id : %d",p2.prodid);
printf("\nproduct name is :%s",p2.prodname);
printf("\nproduct rate is : %d",p2.prodrate);
printf("\nproduct quantity is :%d",p2.quantity);

}
