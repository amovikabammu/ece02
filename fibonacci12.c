#include <stdio.h>
int main() 
{
int n,c,a=0,b=1,i;
scanf("%d",&n);
 for(i=0;i<n;i++)
{
if(n==1)
{
c=n;
}
else
{
a=b;
b=c;
c=a+b;
}
printf("%d ",c);
}
return 0;
}
