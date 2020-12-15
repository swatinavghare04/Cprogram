
// array - no return type no argument

#include<stdio.h>
#include<conio.h>
void array();
void main()
{

clrscr();
array();
 getch();

}

void array()
{
int a[10],n,i,large;
printf("enter the size of array :");
scanf("%d",&n);
printf("enter the values : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=1;i<n;i++)
{
 if(a[i]>large)
 {
   large=a[i];
 }
}
printf("largest value is : %d",large);
}