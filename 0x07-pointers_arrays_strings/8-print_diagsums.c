#include "main.h"

/**
 *print_diagsums - is a func
 *@a: an input
 *@size: an input
 *Return: return c
 */

void print_diagsums(int *a, int size)
{
int diag1 = 0, diag2 = 0, x = 0;
for (x = 0; x < size; x++)
{
diag1 += *(a + (x * (size + 1)));
diag2 += *((a + size - 1) + (x * (size - 1)));
}
printf("%d, %d\n", diag1, diag2);
}
