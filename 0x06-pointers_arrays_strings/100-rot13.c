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
 *fistHalf - is a func
 *@x: an input
 *Return: return c
 */
char fistHalf(char x)
{
return ((x <= 'm' && x >= 'a') || (x <= 'M' && x >= 'A'));
}

/**
 *rot13 - is a func
 *@c: an input
 *Return: return c
 */
char *rot13(char *c)
{
int i = 0;
char temp = 0;
for (i = 0; c[i] != '\0'; i++)
{
temp = c[i];
if (_isalpha(c[i]) && fistHalf(c[i]))
c[i] += 26;

while (_isalpha(temp))
{
c[i] -= 13;
break;
}

}
return (c);
}
