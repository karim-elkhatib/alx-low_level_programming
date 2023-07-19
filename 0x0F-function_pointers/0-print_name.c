#include "main.h"

/**
 *print_name - is a func
 *@name: an input
 *@f: an input
 *Return: return c
 */

void print_name(char *name, void (*f)(char *))
{
int i = 0;
f;
while(name[i] != '\0')
{
_putchar(name[i]);
i++;
}
}