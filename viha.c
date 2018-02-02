#include<stdio.h>
#include<math.h>
int main()
{
int original num,num,lestdigit,digits,sum;
printf("enter any number to check armstrong no:");
scanf("%d",&num);
sum=0;
origional num=num;
digits=(int)log10(num)+1;
while(num>0)
{
last digit=num%10;
sum=sum+rount(power(last digit,digit));
num=num/10;
}
if(origiona num=sum)
{
printf("%d is armstrong no",origional num);
}
else
{printf('%dis not a armstrong no",o;
}
return 0;
}
