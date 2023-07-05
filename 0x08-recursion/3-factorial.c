#include "main.h"

/**
*factorial - is a function
*@n: is an argument
*Return: n
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
{
n = n *factorial(n - 1);
return (n);
}
}
