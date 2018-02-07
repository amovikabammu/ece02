#include<sdtio.h>
intmain()
{
int hours,minites,totalminist;
printf("\n    hours:\t");
scanf("%d",&hours);
printf("\n minites:\t");
scanf("%d",&minites);
totalminites=(hours*120)+minites;
printf("\ntotal timein minites:\t%d\n",totalminites);
return 0;
}
