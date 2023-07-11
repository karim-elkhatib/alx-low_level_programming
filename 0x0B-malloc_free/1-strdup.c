#include "main.h"
#include <stdlib.h>

/**
 *_strdup - is a func
 *@str: an input
 *Return: return c
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
else
{
char *A;
unsigned int i = 0, size = 0;
while (*(str + size) != '\0')
size++;
A = (char *)(malloc(sizeof(char) * (size + 1)));
while (i < size)
{
*(A + i) = *(str + i);
i++;
}
return (A);
}
}
