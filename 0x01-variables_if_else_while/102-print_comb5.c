#include <stdio.h>
/**
* main - Entry point
* Description: print comp5 printing c program
* Return: always 0 (success)
*/
int main(void)
{
int x = 48;
int i = 48;
int y = 48;
int n = 48;
for (i = 48; i < 58; i++)
{
for (x = i; x < 58; x++)
{
for (y = 48; y < 58; y++)
{
for (n = x; n < 58; n++)
{
if ((i == y) && (x == n))
{
}
else
{
putchar(i);
putchar(x);
putchar(' ');
putchar(y);
putchar(n);
 if ((i == 57 && x == 57) && (y == 56 && n == 57) )
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
