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
_putchar('0' + n);
for (i = (n + 1); i < 99; i++)
{
_putchar(',');
_putchar(' ');
if (i <= 9)
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
