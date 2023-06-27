#include "main.h"

/**
 *_strcpy - is a func
 *@dest: an input
 *@src: an input
 *Return: no return
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
