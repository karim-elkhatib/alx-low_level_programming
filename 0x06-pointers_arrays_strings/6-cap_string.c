#include "main.h"

/**
 *_strcmp - is a func
 *@s1: an input
 *@s2: an input
 *Return: no return
*/
char *cap_string(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
      if ((str[i] == ' ' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == ',' || str[i] == '\t' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') && (str[i + 1] <= 'z' && str[i + 1] >= 'a'))
	{
	str[i + 1] = str[i + 1] - 32;
	}
    }
    return (str);
}
