#include "main.h"
/**
* numLength - utility functionentry point
* Description: Natural Num. proj
* @num : input
* Return: 0 in success & 1 error
*/
int numLength(int num)
{
int l = 0;
if (!num)
return (1);
while (num)
{
num = num / 10;
l += 1;
}
return (l);
}
/**
* main - utility functionentry point
* Description: Natural Num. proj
* Return: 0 in success & 1 error
*/
int main(void)
{
unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;
int count, i;
for (count = 1; count <= 98; count++)
{
if (f1o > 0)
printf("%lu", f1o);
i = numLength(mx) - 1 - numLength(f1);
while (f1o > 0 && i > 0)
{
printf("%d", 0);
i--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
sumo = f1o + f2o + (f1 + f2) / mx;
f1 = f2;
f1o = f2o;
f2 = sum;
f2o = sumo;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
