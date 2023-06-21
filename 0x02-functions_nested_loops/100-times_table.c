#include "main.h"
/**
* print_times_table - utility function
* Description: a function that checks if the alpha is U or L
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
void print_times_table(int n)
{
int x = 0;
int y = 0;
int mul = 0;
for (x = 0; x <= n; x++)
{
_putchar('0');
for (y = 1; y <= n; y++)
{
_putchar(',');
_putchar(' ');
mul = x * y;
if (mul <= 9)
_putchar(' ');
else
_putchar(mul / 10 + '0');
_putchar(mul % 10 + '0');
}
_putchar('\n');
}
}

