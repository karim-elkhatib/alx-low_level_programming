#include "main.h"

/**
 *_strncpy - is a func
 *@dest: an input
 *@scr: an input
 *@n: an input
 *Return: no return
*/
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0, z = 0;
    while (dest[z] != '\0')
    {
        z++;
    }
    for (i = 0; i < n ; i++)
    {
        dest[i] = src [i];
    }
    if (z < n)
    dest[i] = '\0';
    return (dest);
}
