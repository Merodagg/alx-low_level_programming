# include <stdio.h>
# include <stdlib.h>
#include <time.h>
/**
* main - print the out
* Return: Always 0
*/
int main(void)
{
	int p, q;

for (p = 0; p <= 99; p++)
{
for (q = p + 1; q <= 99; q++)
{
if (p < q && p != q)
{
putchar((p / 10) + '0');
putchar((p % 10) + '0');
putchar(' ');
putchar((q / 10) + '0');
putchar((q % 10) + '0');
if (p != 98 || q != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
