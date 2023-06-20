#include "main.h"

void main(void)
{
int s1;
int s2;
int m1;
int m2;
for (m1 = 0; m1 < 3; m1++)
{
for (m2 = 0; m2 < 4; m2++)
{
for (s1 = 0; s1 < 6; s1++)
{
for (s2 = 0; s2 < 10; s2++)
{
putchar(m1 + '0');
putchar(m2 + '0');
putchar(':');
putchar(s1 + '0');
putchar(s2 + '0');
putchar('\n');
}
}
}
}
}


/*
int main (void)
{
  //int i = -15;
  jack_bauer();
  //printf ("%d\n",i);
  //printf("%d",i);
}
*/
