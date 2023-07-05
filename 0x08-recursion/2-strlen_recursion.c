#include "main.h"

/**
*_strlen_recursion - is a function
*@s: is an argument
*Return: num
*/

int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
n = 1 + _strlen_recursion(s + 1);
return (n);
}
