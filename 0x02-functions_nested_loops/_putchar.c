#include <unistd.h>

/**
<<<<<<< HEAD
 *  _putchar - writes the character c to stdout
 *  @C: The character to print
 *
 *   Return: On sucess 1.
 *   On error, -1 is returned, and errno is set approriately.
 */
int_putchar(char c)
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
>>>>>>> 6079ae0e8e615b51d9eb85123c7ea4329bcfa5b8
{
	return (write(1, &c, 1));
}
