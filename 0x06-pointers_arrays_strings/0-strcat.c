#include "main.h"

/**
 *_strcat - is a func
 *@dest: an input
 *@src: an input
 *Return: return dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0, n = 0;
while (dest[i] != '\0')
{
i++;
}
for (n = 0; src[n] != '\0'; n++)
{
dest[i] = src[n];
i++;
}
dest[i] = '\0';
return (dest);
}
