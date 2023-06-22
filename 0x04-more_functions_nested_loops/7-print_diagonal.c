#include "main.h"

/**
 *print_diagonal - is a func
 *@n: an input
 *Return: no return
*/

void print_diagonal(int n)
{
int i = 0, j = 0;
if (n <= 0)
{
_putchar('\n');
}
for (i = 1; i <= n; i++)
{
for (j = 1; j <= (i - 1); j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}


