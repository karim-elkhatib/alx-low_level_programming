#include "main.h"

/**
 *_puts - is a func
 *@str: an input
 *Return: no return
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
