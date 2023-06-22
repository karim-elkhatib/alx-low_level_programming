#include "main.h"

/**
 *main - entry point
 *Description: fizzbuzz task
 *Return: always 0
*/

int main(void)
{
int i = 0;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz");
else if (i % 5 == 0)
printf("Buzz");
else if (i % 3 == 0)
printf("Fizz");
else
printf("%d", i);
printf(" ");
}
printf("\n");
}
