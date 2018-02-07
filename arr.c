#include<stdio.h>
void main()
{
int a[10],i,m;
printf("enter the range:");
scanf("%d",&m);
for(i=0i<m;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
printf("\n%d\t%d",a[i],i);
}
rturn 0;
}
