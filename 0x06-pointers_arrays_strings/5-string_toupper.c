#include "main.h"

/**
 *string_toupper - is a func
 *@str: an input
 *Return: no return
*/
char *string_toupper(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] <= 'z' && str[i] >= 'a')
str[i] = str[i] - 32;
}
return (str);
}
