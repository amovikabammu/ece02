#include <stdio.h>
void main()
{
	int i,j;
	scanf("%d%d",&i,&j);
	printf("\nbefore swapping i=%d and j=%d",i,j);
	i=i^j;
	j=i^j;
	i=i^j;
	printf("\n after swapping i=%d andn j=%d",i,j);
}
