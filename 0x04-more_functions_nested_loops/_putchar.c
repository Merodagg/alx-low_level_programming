#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout for a file
 * @c: The character to print inthe file
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately displayed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
