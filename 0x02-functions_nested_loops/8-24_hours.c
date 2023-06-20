#include "main.h"
/**
* jack_bauer - utility function
* Description: a function that checks if the alpha is U or L
* Return: 1 if the 'c' lowercase & 0 otherwise
*/
void jack_bauer(void)
{
int s1;
int s2;
int m1;
int m2;
for (m1 = 0; m1 < 3; m1++)
{
for (m2 = 0; m2 < 10; m2++)
{
for (s1 = 0; s1 < 7; s1++)
{
for (s2 = 0; s2 < 10; s2++)
{
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar(':');
_putchar(s1 + '0');
_putchar(s2 + '0');
_putchar('\n');
}
}
}
}
}
