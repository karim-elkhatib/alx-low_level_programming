#include "main.h"

/**
 *_strlen - is a func
 *@s: an input
 *Return: no return
*/
int _strlen(char *s)
{
int len = 0;
for (; *s != '\0'; s++)
{
len++;
}
return (len);
}
