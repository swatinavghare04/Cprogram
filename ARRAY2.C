// array - no return type with argument

#include<stdio.h>
#include<conio.h>
void array(int a[],int);
void main()
{
 int a[10],n,i;
printf("enter the size of array :");
scanf("%d",&n);
printf("enter the values : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
clrscr();
array(a,n);
 getch();

}

void array(int a[], int no)
{
 int i,large;
large=a[0];
for(i=1;i<no;i++)
{
 if(a[i]>large)
 {
   large=a[i];
 }
}
printf("largest value is : %d",large);
}