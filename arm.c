#include<stdio.h>
#include<math.h>
void main()
{
int number,sum=0,rem=0,cube=0,tmp;
printf("enter a number");
scanf("%d",&number);
temp=number;
while(number!=0)
{
rem=number%10;
cube=pow(rem,3);
sum=sum+cube;
number=number/10;
}
if(sum==temp)
printf("the given no is armstrong no");
else
printf("the given number not a armstrong no");
}
