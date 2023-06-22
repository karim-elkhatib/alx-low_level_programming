#include "main.h"

/**
 *more_numbers - is a func
 *Return: no return
*/

void more_numbers(void)
{
int i = 0;
int x = 0;
for (x = 0; x < 10; x++)
{
i = 0;
while (i >= 0 && i < 15)
{
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
i++;
}
_putchar('\n');
}
}
