#include<stdio.h>
#include<conio.h>
void main()
{
int a, days,years,weeks;
clrscr();
fflush(stdin);
printf("enter number days : ");
scanf(" %d ",&a);
years = a/365;
printf(" years = %d",years);
weeks = (a%365)/7;
printf(" weeks = %d",weeks);
days = a-((years*365)+(weeks*7));
printf(" days = %d",days);
getch();

}