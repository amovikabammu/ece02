#include <stdio.h>
void main()
{
int i,j,temp;
scanf("%d%d",&i,&j);
printf("\nbefore swapping i=%d and j=%d",i,j);
temp=i;
i=j;
j=temp;
printf("\n after swapping i=%d andn j=%d",i,j);
}
