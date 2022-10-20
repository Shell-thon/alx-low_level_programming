#include "main.h"

/**
 * 7-print_last_digit.c - function that prints the last digit of a nummber
 * @r:first parameter
 *
 * Description: prints last digit of a number.
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
