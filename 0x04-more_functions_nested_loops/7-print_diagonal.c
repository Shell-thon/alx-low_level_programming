#include "main.h"
/**
* print_diagonal - function
* @n: first operand
*
* Description: draws a diagonal line on the terminal.
* Return: Always 0 (success)
*/
void print_diagonal(int n)
{
	int i;
	int d;

	if (n <= 0)
		_putchar(10);
	else
	{
	for (i = 0; i < n; i++)
	{
		for (d = 0; d < i; d++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
	}
	}
}
