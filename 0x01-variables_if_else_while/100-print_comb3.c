#include <stdio.h>
/**
* main - Entry point
* Description: print comp3 printing c program
* Return: always 0 (success)
*/
int main(void)
{
int x = 48;
int i = 48;
for (i = 48; i < 58; i++)
{
for (x = i; x < 58; x++)
{
if (x == i)
{
}
else
{
putchar(i);
putchar(x);
if (i != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
