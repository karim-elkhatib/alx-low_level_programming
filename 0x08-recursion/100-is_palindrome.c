#include "main.h"

/**
*check - is a function
*@s: is an argument
*@x: is an argument
*@y: is an argument
*@z: is an argument
*Return: num
*/

int check(char *s, int x, int y, int z)
{
if ((x == y && z != 0) || (x == y + 1 && z == 0))
return (1);
else if (s[x] != s[y])
return (0);
else
return (check(s, x + 1, y - 1, z));
}

/**
*lastI - is a function
*@s: is an argument
*Return: num
*/

int lastI(char *s)
{
int a = 0;
if (*s > '\0')
a = a + lastI(s + 1) + 1;
return (a);
}

/**
*is_palindrome - is a function
*@s: is an argument
*Return: num
*/

int is_palindrome(char *s)
{
int last = lastI(s);
return (check(s, 0, last - 1, last % 2));
}
