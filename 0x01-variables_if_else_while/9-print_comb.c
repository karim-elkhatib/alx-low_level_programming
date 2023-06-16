#include <stdio.h>
/**
* main - Entry point
* Description: print comp printing c program
* Return: always 0 (success)
*/
int main(void)
{
char x = 48;
putchar(x);
for (x = 49; x < 58; x++)
{
putchar(',');
putchar(' ');
putchar(x);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
return (0);
}
