#include "main.h"

/**
 *print_array - is a func
 *@a: an input
 *@n: an input
 *Return: no return
*/
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (i < (n - 1))
printf("%d ," ,a[i]);
else
printf("%d" ,a[i]);
}
printf("\n");
}
