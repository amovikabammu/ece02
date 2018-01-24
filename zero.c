#include<stdio.h>
void main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num>0)
{
printf("%d is a pasitive number\n",num);
else if(num<0)
{
printf("%dis a negative number\n",num);
else
printf("the number is zero\n",num);
}}}
