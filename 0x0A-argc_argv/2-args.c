#include "main.h"

/**
 *main - is a func
 *@argc: an input
 *@argv: an input
 *Return: return 0
 */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
