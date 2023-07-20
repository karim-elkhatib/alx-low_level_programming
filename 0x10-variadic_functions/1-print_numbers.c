#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers- is a func
 *@n: an input
 *@separator: an input
 *Return: return c
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
int x = 0;
if (separator == NULL)
{

}
else
{
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
x = va_arg(args, int);
if (i == (n - 1))
printf("%d", x);
else
printf("%d%s ", x, separator);
}
printf("\n");
va_end(args);
}
}
