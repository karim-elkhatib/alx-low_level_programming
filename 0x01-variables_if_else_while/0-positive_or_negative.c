#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
* Description: if statement c program
* Return: always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%dis negative\n", n);
else if (n > 0)
printf("%dis positive\n", n);
else
printf("%dis zero\n", n);
return (0);
}
