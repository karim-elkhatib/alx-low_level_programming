#include "main.h"
/**
* times_table - utility function
* Description: a function that checks if the alpha is U or L
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
void times_table(void)
{
int x = 0;
int y = 0;
int mul = 0;
for (x = 0; x < 10; x++)
{
_putchar('0');
for (y = 0; y < 10; y++)
{
_putchar(',');
_putchar(' ');
mul = x * y;
if (y <= 9)
_putchar(' ');
 else
_putchar(mul / 10 + '0');
_putchar(mul % 10 + '0');
}
_putchar('0');
}
}
