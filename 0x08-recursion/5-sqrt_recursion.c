#include "main.h"

/**
*square - is a function
*@x: is an argument
*@y: is an argument
*Return: y
*/

int square(int x, int y)
{
if (y * y == x)
return (y);
else if (y * y < x)
return (square(x, y + 1));
else
return (-1);
}

/**
*_sqrt_recursion - is a function
*@n: is an argument
*Return: x
*/

int _sqrt_recursion(int n)
{
return (square(n, 1));
}
