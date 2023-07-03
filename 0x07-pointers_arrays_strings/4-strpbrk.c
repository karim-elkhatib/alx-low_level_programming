#include "main.h"

/**
 *_strpbrk - is a func
 *@s: an input
 *@accept: an input
 *Return: return c
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;
char *p;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
p = &s[i];
return (p);
}
}
}
return (0);
}
