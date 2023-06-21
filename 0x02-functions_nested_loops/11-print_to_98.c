#include "main.h"
/**
* print_to_98 - utility function
* Description: a function that checks if the alpha is U or L
* @n: describe the parameter: is a character input for the func
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
void print_to_98(int n)
{
int i = 0;
if (n > 98)
for (i = n; i > 98; i--)
printf("%d, ",i);
else
for (i = n; i < 98; i++)
printf("%d, ",i);
printf("98\n");
}

