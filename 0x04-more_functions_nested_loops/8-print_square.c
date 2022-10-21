#include "main.h"
/**
* print_square - function
* @size: first operand
*
* Description: prints a square, followed by a new line
* Return: Always 0 (success)
*/
void print_square(int size)
{
	int i;
	int d;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (d = 1; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar(10);
		}
	}
}
