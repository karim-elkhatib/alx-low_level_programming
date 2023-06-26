#include "main.h"

/**
 *print_rev - is a func
 *@s: an input
 *Return: no return
*/
void print_rev(char *s)
{
int len = 0;
for (; *s != '\0'; s++)
{
len++;
}
s--;
while (len >= 0)
{
_putchar(*s);
s--;
len--;
}
}
