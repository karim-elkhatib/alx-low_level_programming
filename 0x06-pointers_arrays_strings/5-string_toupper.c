#include "main.h"

/**
 *_strcmp - is a func
 *@s1: an input
 *@s2: an input
 *Return: no return
*/
char *string_toupper(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
      if (str[i] <= 'z' && str[i] >= 'a')
        str[i] = str[i] - 32;
    }
    return (str);
}
