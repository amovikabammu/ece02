#include<stdio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
int res;
puts("enter string 1:");
gets(str1);
puts("enter string 2:");
gets(str2)
res=strcmp(str1,str2);
if(res==0)
puts("string are equal");
else
puts("string are not equal");
}
