#include "main.h"

/**
 *puts_half - is a func
 *@str: an input
 *Return: no return
*/
void puts_half(char *str)
{
int i = 0, len = 0, n = 0;
for (i = 0; *(str + i) != '\0'; i++)
{
len++;
}
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len - 1) / 2;
n++;
}
for (i = n ; *(str + i) != '\0'; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
