#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
char title[10],author[10];
float price;
};
void main()
{
struct book b1;
clrscr();
printf("\nenter the title :");
gets(b1.title);
printf("\n enter the name of the authour : ");
gets(b1.author);
printf("enter the price : ");
scanf("%f",&b1.price);
printf("\n book title : ");
puts(b1.title);
printf("\nbook author : %s",b1.author);
printf("\nbook price: %f",b1.price);
getch();

}