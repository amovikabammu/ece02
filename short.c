#include <stdio.h>
int main()
{
int array[50], size, i,shorted;
printf("\n Enter the size of the array: ");
scanf("%d", &size);
printf("\n Enter %d elements of  the array: ", size);
for (i = 0; i < size; i++)
scanf("%d", &array[i]);
shorted = array[0];
for (i = 1; i < size; i++)
{
if (shorted < array[i])
shorted = array[i];
printf("\n shorted element present in the given array is : %d", shorted);
return 0;
}
