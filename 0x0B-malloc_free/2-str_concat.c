#include "main.h"
#include <stdlib.h>

/**
 *str_concat - is a func
 *@s1: an input
 *@s2: an input
 *Return: return c
 */
char *str_concat(char *s1, char *s2)
{
char *A;
unsigned int i = 0, size1 = 0, size2 = 0, j = 0;
while (*(s1 + size1) != '\0')
size1++;
while (*(s2 + size2) != '\0')
size2++;
A = (char *)(malloc(sizeof(char) * ((size1 + 1) + size2 + 1)));
while (i < size1)
{
*(A + i) = *(s1 + i);
i++;
}
while (i < (size1 + size2))
{
*(A + i) = *(s2 + j);
i++;
j++;
}
*(A + i) = '\0';
return (A);
}
