#include<stdio.h>
void swap(int,int);
void main()
{
int x,y;
printf("enter the number");
scanf("\t\t%d%d",&x,&y);
printf("\nbefore swapping:%d%d",x,y);
swap(x,y);
}
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("\nafter swapping value:%d%d",a,b);
}
