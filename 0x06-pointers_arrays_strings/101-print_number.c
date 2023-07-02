#include "main.h"

/**
 *print_number - is a func
 *@n: an input
 *Return: no return
 */
void print_number(int n)
{
int t = 0, most = n;
/*zero printing*/
if (n == 0)
{
_putchar('0');
}
/*negative printing*/
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
while (most % 10 == 0)
{
_putchar('0');
most = most / 10;
}
}
/*positive printing*/
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
while (most % 10 == 0)
{
_putchar('0');
most = most / 10;
}
}
}
