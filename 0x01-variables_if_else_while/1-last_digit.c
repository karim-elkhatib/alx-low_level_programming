#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
* Description: Last digit c program
* Return: always 0 (success)
*/
int main(void)
{
int n;
int b;
srand(time(0));
n = rand() - RAND_MAX / 2;
b = n / 10;
b = b * 10;
b = n - b;
if (b == 0)
printf("Last digit of %d is %d and is 0\n", n, b);
else if (b > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, b);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
return (0);
}
