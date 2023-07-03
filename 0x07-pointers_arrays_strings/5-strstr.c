#include "main.h"

/**
 *_size - is a func
 *@str: an input
 *Return: return c
 */
int _size(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
return (i);
}

/**
 *_strstr - is a func
 *@haystack: an input
 *@needle: an input
 *Return: return c
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, x = 0, c = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
x = i;
c = 0;
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[x] == needle[j])
{
c++;
x++;
}
}
if (c == _size(needle))
return (haystack + i);
}

}
return ('\0');
}
