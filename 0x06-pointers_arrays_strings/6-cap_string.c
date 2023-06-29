#include "main.h"
/**
 *_islower - is a func
 *@x: an input
 *Return: no return
*/

char _islower(char x)
{
return (x >= 'a' && x <= 'z');
}
/**
 *isSeparator - is a func
 *@x: an input
 *Return: no return
*/

char isSeparator(char x)
{
int i = 0;
char sep[] = " \t\n,;.!?\"(){}";
for (i = 0; i < 12; i++)
{
if (sep[i] == x)
return (1);
}
return (0);
}

/**
 *cap_string - is a func
 *@str: an input
 *Return: no return
*/

char *cap_string(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (isSeparator(str[i]) && _islower(str[i + 1]))
str[i + 1] -= 32;
}
return (str);
}
