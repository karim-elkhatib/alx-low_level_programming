#include "main.h"

/**
 *rev_string - is a func
 *@s: an input
 *Return: no return
*/
void rev_string(char *s)
{
int len = 0;
char *temp;
for (; *s != '\0'; s++)
{
len++;
}
s--;
while (len > 0)
{
*temp = *s;
s--;
temp++;
len--;
}
for (; *temp != '\0'; s++)
{
*s = *temp;
s++;
}
}
