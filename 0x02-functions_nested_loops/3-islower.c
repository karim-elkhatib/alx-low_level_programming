#include "main.h"
/**
* _islower - utility function
* Description: a function that checks if the alpha is U or L
* @c: describe the parameter: is a character input for the func
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
