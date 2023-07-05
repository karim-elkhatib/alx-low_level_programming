#include "main.h"

/**
*check - is a function
*@x: is an argument
*@y: is an argument
*Return: n
*/

int check(int x, int y)
{
if (y >= x && x > 1)
return (1);
else if (x % y == 0 || x <= 1)
return (0);
else
return (check(x, y + 1));
}

/**
*is_prime_number - is a function
*@n: is an argument
*Return: n
*/

int is_prime_number(int n)
{
return (check(n, 2));
}
