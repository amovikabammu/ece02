#include<stdio.h>
int main()
{
int i,fact,n;
printf("enter number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of given no is%d",fact);
return 0;
}
