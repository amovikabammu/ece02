#include<stdio.h>
void main()
{
 int j=0,i;
 char s[30]="hello world";
 for(i=0;s[i]!='\0';i++)
 {
  if((s[i]!=' '))
 {
  j++;
 }
 }
  printf("\n %d",j);
}
