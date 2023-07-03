#include "main.h"

/**
 *_strspn - is a func
 *@s: an input
 *@accept: an input
 *Return: return c
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0, x = 0, flag = 0;
for (i = 0; s[i] != '\0'; i++)
{
flag = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
x++;
flag = 1;
}
}
if (flag == 0)
break;
}
return (x);
}
