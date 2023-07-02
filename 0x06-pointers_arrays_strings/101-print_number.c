#include "main.h"

/**
 *_numrev - is a func
 *@n: an input
 *Return: no return
 */
int _numrev(int n)
{
int t = 0;
while (n != 0)
{
t = (t * 10) + (n % 10);
n = n / 10;
}
return (t);
}

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
t = _numrev(n);
_putchar('-');
while (t != 0)
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
t = _numrev(n);
while (t != 0)
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
