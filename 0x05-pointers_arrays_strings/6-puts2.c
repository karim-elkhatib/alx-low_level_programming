#include "main.h"

/**
 *puts2 - is a func
 *@str: an input
 *Return: no return
*/
void puts2(char *str)
{
int i = 0, len = 0;
for (i = 0; *(str + i) != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str + i);
}
}
