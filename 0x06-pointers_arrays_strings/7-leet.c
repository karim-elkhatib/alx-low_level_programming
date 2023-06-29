#include "main.h"

/**
 *leet - is a func
 *@str: an input
 *Return: no return
*/
char *leet(char *str)
{
int i = 0;
char value[] = {'4', '3', '0', '7', '1'};
char key[] = {'A', 'E', 'O', 'T', 'L'};

while (*str)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*str == key[i] || *str == key[i] + 32)
{
*str = value[i];
}
str++;
}
}
return (str);
}
