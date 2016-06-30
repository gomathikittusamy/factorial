#include<stdio.h>
#include<conio.h>
void main()
{
long fact=1;
int i=1,n;
clrscr();
printf("enter the no\n");
scanf("%d",&n);
while(i<=n)
{
fact=(long)fact*i;
i++;
}
printf("factorial of the %d is %ld",n,fact);
getch();
}
