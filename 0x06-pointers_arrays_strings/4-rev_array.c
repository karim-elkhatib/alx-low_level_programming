#include "main.h"

/**
 *_strcmp - is a func
 *@s1: an input
 *@s2: an input
 *Return: no return
*/
void reverse_array(int *a, int n)
{
    int tmp[100] , i = 0, y = 0;

    y = n-1;
    for (i = 0; i < n; i++)
    {
        tmp[y] = a[i];
        y--;
    }
    for (i = 0; i <= n; i++)
      {
	a[i] = tmp [i];
      }
}
