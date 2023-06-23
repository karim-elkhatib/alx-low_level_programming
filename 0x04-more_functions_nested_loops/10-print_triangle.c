#include "main.h"

/**
 *print_triangle - is a func
 *@size: an input
 *Return: no return
*/

void print_triangle(int size)
{
int x = 0, j = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 1; x <= size; x++)
{
for (j = 1; j <= size; j++)
{
if ((x + j) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
