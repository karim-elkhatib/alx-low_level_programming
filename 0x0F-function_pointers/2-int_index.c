#include "main.h"

/**
 *int_index - is a func
 *@array: an input
 *@size: an input
 *@cmp: an input
 *Return: return c
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
{
return (-1);
}
else
{
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
else
{
i++;
}
}
}
return (-1);
}
