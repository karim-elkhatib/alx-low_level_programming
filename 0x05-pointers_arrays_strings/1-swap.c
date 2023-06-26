#include "main.h"

/**
 *swap_int - is a func
 *@a: an input
 *@b: an input
 *Return: no return
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
