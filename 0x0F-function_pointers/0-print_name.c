#include "main.h"

/**
 *print_name - is a func
 *@name: an input
 *@f: an input
 *Return: return c
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
