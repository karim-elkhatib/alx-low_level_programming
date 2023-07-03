#include "main.h"

/**
 *_strchr - is a func
 *@s: an input
 *@c: an input
 *Return: return c
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
if (*(s + i) == c)
{
return (s + i);
}
}
return('\0');
}
