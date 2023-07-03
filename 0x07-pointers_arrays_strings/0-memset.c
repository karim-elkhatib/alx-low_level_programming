
#include "main.h"

/**
 *_memset - is a func
 *@s: an input
 *@b: an input
 *@n: an input
 *Return: return c
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
