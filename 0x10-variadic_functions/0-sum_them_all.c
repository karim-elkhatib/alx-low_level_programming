#include "main.h"
#include <stdarg.h>
/**
 *sum_them_all- is a func
 *@n: an input
 *Return: return c
 */
int sum_them_all(const unsigned int n, ...)
{
int s = 0, i = 0, x = 0;
if (n == 0)
return (0);
else
{
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
s += x;
}
va_end(args);
}
return (s);
}
