
#include "main.h"

/**
 *_memcpy - is a func
 *@dest: an input
 *@src: an input
 *@n: an input
 *Return: return c
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}