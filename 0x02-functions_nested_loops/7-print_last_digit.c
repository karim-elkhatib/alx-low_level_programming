#include "main.h"
/**
* print_last_digit - utility function
* Description: a function that checks if the alpha is U or L
* @n: describe the parameter: is a character input for the func
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
int print_last_digit(int n)
{
n = n - ((n / 10) * 10);
return (n);
}

