// array - with return type and with argument

#include<stdio.h>
#include<conio.h>
int array(int a[],int);
void main()
{
 int a[10],n,i,s;
 clrscr();
printf("enter the size of array :");
scanf("%d",&n);
printf("enter the values : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
s=array(a,n);
printf("%d",s);
 getch();

}

int array(int a[], int no)
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
return large;
}