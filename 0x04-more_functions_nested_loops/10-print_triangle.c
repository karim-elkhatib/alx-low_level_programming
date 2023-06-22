#include "main.h"

/**
 *print_triangle - is a func
 *@size: an input
 *Return: no return
*/

void print_triangle(int size)
{
  int x = 0, i = 0, j = 0;
if (size <= 0)
{
_putchar('\n');
}
for (x = 1; x <= size; x++)
{
for (j = (size - 1); j >= x; j--)
{
_putchar(' ');
}
 for (i = 1; i <= x; i++)
_putchar('#');
_putchar('\n');
}
}
