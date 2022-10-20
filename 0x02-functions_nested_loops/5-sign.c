#include "main.h"

/**
 * print_sign: function to print the sign of a number
 * @n: First parameter
 *
 * Descrition: printing positive, negative, or zero
 * Return: 1 and prints + if  n > 0, ret 0/print0 if n =0,
 * ret  -1/print- in n < 0
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
