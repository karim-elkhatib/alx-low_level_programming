#include "main.h"
/**
* main - utility functionentry point
* Description: Natural Num. proj
* Return: 0 in success & 1 error
*/
int main(void)
{
unsigned long fib1 = 0;
unsigned long fib2 = 1;
unsigned long sum = 0;
float total_sum =0;
while(1)
{
sum = fib1 + fib2;
if(sum > 4000000)
break;
if ((sum % 2) == 0)
total_sum += sum;
fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", total_sum);
return (0);
}
