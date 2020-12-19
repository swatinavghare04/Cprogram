#include<stdio.h>
#include<conio.h>
#include<string.h>
struct product
{
char prodname[20];
float price;
}prod1;

void main()
{
clrscr();
printf("\nenter the details :");
/*gets(b1.title);
printf("\n enter the name of the authour : ");
gets(b1.author);
printf("enter the price : ");*/
scanf("%s%f",&prod1.prodname,&prod1.price);
printf("\n product details : ");
printf("\n product name : %s",prod1.prodname);
printf("\nbook price: %f",prod1.price);
getch();

}