#include "main.h"

/**
 *_strcpy - is a func
 *@dest: an input
 *@scr: an input
 *@n: an input
 *Return: no return
*/
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, z = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    for (z = 0; z < n && src[z] != '\0'; z++)
    {
        dest[i] = src [z];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
