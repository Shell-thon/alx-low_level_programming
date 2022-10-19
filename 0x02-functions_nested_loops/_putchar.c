#include <unistd.h>

/**
 *  _putchar - writes the character c to stdout
 *  @C: The character to print
 *
 *   Return: On sucess 1.
 *   On error, -1 is returned, and errno is set approriately.
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
