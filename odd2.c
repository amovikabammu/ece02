#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the no");
	scanf("%d%d",&a,&b);
	c=a+b;
	if(c%2==0)
	{
		printf("\n**EVEN**");
	}
	else
	{
		printf("\n**ODD**");
	}
	return 0;
	}
