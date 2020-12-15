// array - with return type and no argument

#include<stdio.h>
#include<conio.h>
int array();
void main()
{
int s;
s=array();
printf("%d",s);
 getch();

}

int array()
{
int a[10],n,i,large;
 clrscr();
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
return large;
}