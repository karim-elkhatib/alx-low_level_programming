#include "main.h"
/**
* main - utility functionentry point
* Description: Natural Num. proj
* Return: 0 in success & 1 error
*/
int main(void)
{
int i = 0;
unsigned long fib = 0;
unsigned long fib2 = 1;
unsigned long sum = 0;
for (i = 0; i < 50; i++)
{
sum = fib + fib2;
printf("%lu", sum);
fib = fib2;
fib2 = sum;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
