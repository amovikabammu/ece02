#include <stdio.h>
int main()
{
	int i=0,j;
	char s[100];
	printf(" enter the string \n");
	scanf("%s",s);
	for(j=0;s[j]!=NULL;j++)
	{
	i=i+1;
	}
	printf("%d",i);
	return 0;
}
