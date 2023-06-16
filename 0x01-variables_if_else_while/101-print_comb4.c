#include <stdio.h>
/**
* main - Entry point
* Description: print comp4 printing c program
* Return: always 0 (success)
*/
int main(void)
{
int x = 48;
int i = 48;
int y = 48;
for (i = 48; i < 58; i++)
{
for (x = i; x < 58; x++)
{
for (y = x; y < 58; y++)
{
if (x == i || x == y || i == y)
{
}
else
{
putchar(i);
putchar(x);
putchar(y);
if (i != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
