#include <stdio.h>
/**
 * print_alphabet - utility function
 * Description: a function that prints Alpha
 * Return: it does not return any thing
*/
void print_alphabet(void)
{
int x = 0;
for (x = 97; x <= 122; x++)
{
putchar(x);
}
putchar('\n');
}
/**
* main - Entry point
* Description: Alpha printing through a func c program
* Return: always 0 (success)
*/
int main(void)
{
print_alphabet();
return (0);
}
