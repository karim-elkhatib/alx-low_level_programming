#include "main.h"
#include <stdlib.h>

/**
 *create_array - is a func
 *@size: an input
 *@c: an input
 *Return: return c
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
else
{
char *A;
unsigned int i = 0;
A = (char *)(malloc(sizeof(char) * size));
while (i < size)
{
*(A + i) = c;
i++;
}
return (A);
}
}
