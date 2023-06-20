#include "main.h"

int print_last_digit(int n)
{
n = n - ((n / 10) * 10);
return (n);
}

int main (void)
{
  int i = -15;
  print_last_digit(-12516);
  //printf ("%d\n",i);
  //printf("%d",i);
}
