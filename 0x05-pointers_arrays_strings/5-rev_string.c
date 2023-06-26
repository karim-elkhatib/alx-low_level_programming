#include "main.h"

/**
 *rev_string - is a func
 *@s: an input
 *Return: no return
*/
void rev_string(char *s)
{
int i = 0, len = 0;
char *temp;
for (i = 0; *(s + i) != '\0'; i++)
{
*temp = *(s + i);
temp++;
len++;
}
temp--;
for (i = 0; i <= len ; i++)
{
*(s + i) = *temp;
temp--;
}
}
