#include<stdio.h>
int main()
{
char a[100],b[100];
printf("enter string to check if its a palindrome\n");
gets(a);
strcpy(b,a);
strrev(b);
if(strcomp(a,b)==0)
printf(" string is a palindrome\n");
else
printf("string is not palindrome\n");
return 0;
}
