#include "main.h"

/**
 *rot13 - is a func
 *@c: an input
 *Return: return c
 */
char *rot13(char *c)
{
  int i = 0;
  for (i = 0; c[i] != '\0'; i++)
    {
      if (c[i] >= 'a' && c[i] <= 'm')
	c[i] += 13;
      else if (c[i] >= 'A' && c[i] <= 'M')
	c[i] += 13;
      else if (c[i] >= 'n' && c[i] <= 'z')
	c[i] -= 13;
      else if (c[i] >= 'N' && c[i] <= 'Z')
	c[i] -= 13;
      else
	{
	}
    }
  return (c);
}
