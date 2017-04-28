#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,reverse=0,temp;
printf("enter the numbver");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(n==reverse)
{
printf("is palindrome");
}
else
printf("not polindrome");
getch();
}
