#include "main.h"

/**
 *print_number - is a func
 *@n: an input
 *Return: no return
 */
void print_number(int n)
{
int t = 0;
if (n == 0)
{
_putchar('0');
}
else if (n < 0)
{
n = n * -1;
while(n != 0)
{
t = (t * 10) + (n % 10);
n = n / 10; 
}
_putchar('-');
while(t != 0)
{
_putchar((t % 10) + '0');
t = t / 10;
}
}
else
{
while(n != 0)
{
t = (t * 10) + (n % 10);
n = n / 10; 
}
while(t != 0)
{
_putchar((t % 10) + '0');
t = t / 10;
}
}
}
