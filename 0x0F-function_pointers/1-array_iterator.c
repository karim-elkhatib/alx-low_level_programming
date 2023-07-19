#include "main.h"

/**
 *array_iterator - is a func
 *@array: an input
 *@size: an input
 *@action: an input
 *Return: return c
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
