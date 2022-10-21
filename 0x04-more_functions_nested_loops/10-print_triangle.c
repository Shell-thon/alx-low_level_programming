#include "main.h"
/**
* print_triangle - function
* @size: first operand
*
* Description: print a triangle followed by my new line
* Return: Always 0
*/
void print_triangle(int size)
{
	int i;
	int d;
	int c;
	int f = size;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (c = (f - 1); c > 0; c--)
			{
				_putchar(' ');
			}
				for (d = 0; d < i; d++)
				{
					_putchar('#');
				}
/*
*				for (c = 0; c > i; c++)
*				{
*					_putchar(' ');
*				}
*/			_putchar('#');
			_putchar(10);
			f--;
		}
	}
}
