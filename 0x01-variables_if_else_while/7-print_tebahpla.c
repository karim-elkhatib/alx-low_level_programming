#include <stdio.h>
/**
* main - Entry point
* Description: Alpha printing c program
* Return: always 0 (success)
*/
int main(void)
{
char x = 'z';
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
