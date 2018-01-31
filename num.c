include<stdio.h>
int moain()
{
int base,exponent;
long long result;
printf("enter base number:");
scanf("%d",&base);
printf("enter an exponetial:");
scanf("%d",&exponent);
while (exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%lld",result);
return 0;
}
