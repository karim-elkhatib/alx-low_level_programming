#include <stdio.h>
/**
* main - Entry point
* Description: Alpha printing c program
* Return: always 0 (success)
*/
int main(void)
{
char x = 'a';
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' && x != 'e')
putchar(x);
}
putchar('\n');
return (0);
}
