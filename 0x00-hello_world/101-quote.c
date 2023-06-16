#include <unistd.h>

/**
* main - Entry point
* Description: a c program that uses UNIX library
* Return: always 1 (success)
*/

int main(void)
{
char msg[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1,msg,59);
return (1);
}
