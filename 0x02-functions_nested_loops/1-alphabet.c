#include "main.h"

/**
 * print_alphabet - the alphabet in lower case
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int i;

for (i=97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
