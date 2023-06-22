#include "main.h"

/**
 *more_numbers - is a func
 *Return: no return
*/

void more_numbers(void)
{
int i = 48;
while (i >= 48 && i < 62)
{
if (i < 58)
{
_putchar(i);
}
else
{
_putchar(i / 10);
_putchar(i % 10);
}
i++;
}
_putchar('\n');
}
