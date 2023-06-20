#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Description: printing word c program
* Return: always 0 (success)
*/
int main(void)
{
char word[] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(word[i]);
}
_putchar(10);
return (0);
}
