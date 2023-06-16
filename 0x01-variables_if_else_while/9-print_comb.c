#include <stdio.h>
/**
* main - Entry point
* Description: print comp printing c program
* Return: always 0 (success)
*/
int main(void)
{
int x = 48;
for (x = 48; x < 58; x++)
{
putchar(x);
if (x != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
