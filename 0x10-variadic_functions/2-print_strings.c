#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_strings- is a func
 *@n: an input
 *@separator: an input
 *Return: return c
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *str = 0;
if (separator == NULL)
{

}
else
{
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char*);
if (str == NULL)
{
printf("nil%s ", separator);
}
else if (i == (n - 1))
{
printf("%s ", str);
}
else
{
printf("%s%s ", str, separator);
}
}
va_end(args);
}
}
