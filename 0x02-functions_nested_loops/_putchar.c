#include <unistd.h>
  
/**
 * _putchar - writes the character c to stdoutput
 * @c: the character to print
 * Return: 0n success 1.
 * 0n error, -1 is returned, and errorno is set appropriatly.
 */
int _putchar(char c)
{
	 
return (write(1, &c, 1));
}
