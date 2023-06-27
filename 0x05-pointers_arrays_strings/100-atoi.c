#include "main.h"

/**
 *_atoi - is a func
 *@s: an input
 *Return: no return
*/
int _atoi(char *s)
{
int i = 0, x = 0, num = 0, total = 0, sign = 1, no[10], c = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
no[c] = s[i] - '0';
c++;
}
else
{
if (c > 0)
break;
}
}
for (i = 0; i < c; i++)
{
num = no[i];
x = c - i - 1;
while (x > 0)
{
num = num * 10;
x--;
}
total = total + num;
}
return (sign *total);
}
