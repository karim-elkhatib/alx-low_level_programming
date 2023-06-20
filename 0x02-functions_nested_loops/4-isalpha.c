#include "main.h"
/**
* _isalpha - utility function
* Description: a function that checks if the char is alpha or not
* @c: describe the parameter: is a character input for the func
* Return: 1 if the 'c' aplha & 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
