#include <stdio.h>
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
/**
* main - Entry point
* Description: checks if the char is alpha or not
* Return: always 0 (success)
*/
int main(void)
{
int r;
r = _isalpha('H');
putchar(r + '0');
r = _isalpha('o');
putchar(r + '0');
r = _isalpha(108);
putchar(r + '0');
r = _isalpha(';');
putchar(r + '0');
putchar('\n');
return (0);
}

