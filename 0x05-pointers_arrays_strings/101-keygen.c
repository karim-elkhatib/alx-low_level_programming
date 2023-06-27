#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - entery point
 * Description: non
 * Return: 0
*/

int main (void)
{
  int sum;
  cahr c;
  srand(time(NULL));
  while (sum <= 2645)
    {
      c = rand() % 128;
      sum += c;
      putchar(c);
    }
  putchar(2772 - sum);
  return (0);
}
