#include "main.h"

/**
 *_strlen - is a func
 *@s: an input
 *Return: no return
*/
int _strlen(char *s)
{
int  i = 0, len = 0;
for (i = *s; s != '\0'; s++)
{
len++;
}
return (len);
}
