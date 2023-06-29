#include "main.h"

/**
 *_strncpy - is a func
 *@dest: an input
 *@src: an input
 *@n: an input
 *Return: no return
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; i < n && src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
