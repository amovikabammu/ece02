#include<stdio.h>
#include<string.h>
void main()
{
char a[50];
int i,count=0,n;
printf("ENTER THE INPUT STRING:\n");
scanf("%s",a);
n=strlen(a);
for(i=0;i<=n;i++)
{
if(a[i]!=a[n-i-1])
count=1;
}
if(count==0)
printf("THE GIVEN STRING %s IS   A PALLINDROME",a);
else
printf("THE GIVEN STRING %s IS  NOT A PALLINDROME",a);
}
