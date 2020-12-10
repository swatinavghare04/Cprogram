#include<stdio.h>
#include<conio.h>
void main()
{
 char s[6];
 char c[6];
 int i,r,len;
 clrscr();
 printf("enter the name :");
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
 printf(" %c ",s[i]);

 }
 printf("\n%d\n",i);
 strcpy(c,s);
 r=strcmp(c,s);
 printf("length of given string %d",strlen(s));
 printf("\n string in upper case is %s",strupr(s));
 printf("\n string in lower case is %s",strlwr(s));
 printf("\n string in reverse order is %s",strrev(s));
 /*reverse string without using function
 for(i=len-1; i>=0;i--)
 {
    printf(" %c ",s[i]);

}
*/
printf("\n copy string c is \n" );
for(i=0;s[i]!='0';i++)
{
printf(" %c ", c[i]);
}
printf("\n after compare string result is %d", r);
strcat(c,s);
printf("\n after concatinate string is %s",c);
if(c==s)
{
printf("\n string is palindrome");
}
getch();
}