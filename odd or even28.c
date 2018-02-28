#include <stdio.h>
int main()
{
int n,m,s;
printf("enter the no :");
scanf("%d%d",&n,&m);
s=n*m;
if(s%2==0)
{
	printf("***EVEN****");
}
else
{
	printf("[***ODD***");
}
return 0;
}
