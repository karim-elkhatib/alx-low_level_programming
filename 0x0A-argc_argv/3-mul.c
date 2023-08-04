#include "main.h"
#include "stdlib.h"

/**
 *main - is a func
 *@argc: an input
 *@argv: an input
 *Return: return 0
 */

int main(int argc, char *argv[])
{
int i = 0;
if (argc != 3)
{
printf("Error");
return (1);
}
else
{
i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);
return (0);
}
}
