#include "main.h"

/**
 * print_sign - function to print the sign of a number
 * @n: First parameter
 *
 * Description: printing positive, negative, or zero
 *
 * Return: 1 & prints + if n > 0, ret 0 & print 0
 * if n == 0, ret -1 & print '-' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (n);
}
