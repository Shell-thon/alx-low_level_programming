#include "main.h"
/**
 * print_last_digit - function used
 * @r: first parameter
 *
 *  Description: the function returns
 *  the value of the last digit
 * Return: Always 0 (success)
 */

int print_last_digit(int r)
{
	r = (r % 10);

	if (r < 0)
	{
		r = (r * -1);
	}
	_putchar(r + '0');
	return (r);
}
