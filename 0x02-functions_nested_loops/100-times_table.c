#include "main.h"
/**
* print_times_table - utility function
* Description: a function that checks if the alpha is U or L
* @n : the func input
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
void print_times_table(int n)
{
if (n >= 0 && n < 15)
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
else if (mul > 9 && mul <= 99)
_putchar(mul / 10 + '0');
else
{
_putchar(mul / 100 + '0');
_putchar((mul / 10) % 10 + '0');
}
_putchar(mul % 10 + '0');
}
_putchar('\n');
}
}
}

