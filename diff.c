#include<stdio.h>
int main()
{
inthours,minites,h,m,h1,m1;
print("enterhures and minites:");
scanf("%d%d",&hours,&minites);
printf("enter h and m");
scanf("%d%d",&h,&m);
if(hours!=0)
{
h1=hours-h;
m1=minites-m;
printf("%d%d",h1,m1);
}
return 0;
}
