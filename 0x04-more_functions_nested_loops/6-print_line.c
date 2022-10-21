#include "main.h"
/**
* print_line - function
* @n: first operand
*
* Description: draw a straight line in the terminal with \n
* Return: Always 0 (success)
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
