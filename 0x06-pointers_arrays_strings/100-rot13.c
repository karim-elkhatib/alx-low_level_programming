#include "main.h"

/**
 *_isalpha - is a func
 *@x: an input
 *Return: return c
 */
char _isalpha(char x)
{
    return ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'));
}

/**
 *rot13 - is a func
 *@c: an input
 *Return: return c
 */
char *rot13(char *c)
{
int i = 0;
for (i = 0; c[i] != '\0'; i++)
{
if (_isalpha(c[i]) && ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M')))
c[i] += 13;
else
{
while (_isalpha(c[i]))
{
c[i] -= 13;
break;
}
}
}
return (c);
}
