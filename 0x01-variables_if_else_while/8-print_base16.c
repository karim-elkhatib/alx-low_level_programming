#include <stdio.h>
/**
* main - Entry point
* Description: Hexa. printing c program
* Return: always 0 (success)
*/
int main(void)
{
char x = 48;
for (x = 48; x < 58; x++)
{
putchar(x);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
