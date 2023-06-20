#include <stdio.h>
/**
* print_alphabet_x10 - utility function
* Description: a function that prints Alpha X10
* Return: it does not return any thing
*/
void print_alphabet_x10(void)
{
int x = 0;
int i = 0;
for (i = 0; i < 10; i++)
{
for (x = 97; x <= 122; x++)
{
putchar(x);
}
putchar('\n');
}
}
/**
* main - Entry point
* Description: Alpha printing through a func X10 times
* Return: always 0 (success)
*/
int main(void)
{
print_alphabet_x10();
return (0);
}
