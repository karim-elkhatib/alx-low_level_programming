#include <stdio.h>
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
/**
* main - Entry point
* Description: Alpha printing through a func X10 times
* Return: always 0 (success)
*/
int main(void)
{
int r;
r = _islower('H');
putchar(r + '0');
r = _islower('o');
putchar(r + '0');
r = _islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}
