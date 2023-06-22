#include "main.h"

/**
 *print_square - is a func
 *@size: an input
 *Return: no return
*/
void print_square(int size)
{
int i = 0, j = 0;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
