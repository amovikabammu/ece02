#include<stdio.h>
int main()
{
int a,b,d;
printf("enter the value:");
scanf("%d%d",&a,&b);
d=a-b;
if(d%2==0)
{
printf("\n***EVEN***");
}
else
{
printf("\n***ODD***");
}
return 0;
}
