#include "main.h"

/**
* print_numbers - function
*
* Description: Prints numbers 0-9 followed by a newline.
* Return: none
*/
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar(10);
}
