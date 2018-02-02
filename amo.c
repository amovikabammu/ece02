#include<stdio.h>
int main()
{
int n,num=0,i=0;
printf("enter the number\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n%i=0)
num=num+1;
break;
}
if(num==1)
printf("it is not a prime number\t");
else
printf("it is a prime number\t");
return 0;
}
