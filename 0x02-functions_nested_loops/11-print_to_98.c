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
for (i = n; i < 99; i++)
{
if (i <= 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar('\n');
}
}
