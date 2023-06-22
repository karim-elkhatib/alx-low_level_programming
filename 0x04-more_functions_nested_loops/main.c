#include "main.h"
//#include "3-print_numbers.c"
#include "_putchar.c"

void print_numbers(void)
{
int i = 48;
while (i >= 48 && i <= 58)
{
  _putchar(i);
i++;
}
_putchar('\n');
}

int main (void)
{
   print_numbers();
    return (0);
}
