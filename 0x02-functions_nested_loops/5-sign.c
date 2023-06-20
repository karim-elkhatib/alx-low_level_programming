#include "main.h"
/**
* print_sign - utility function
* Description: a function that checks if the alpha is U or L
* @c: describe the parameter: is a character input for the func
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
