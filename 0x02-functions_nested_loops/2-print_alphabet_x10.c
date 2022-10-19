#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * description: print alphabet lowercase in ascending order 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		i++;
		_putchar(10);
	}
}
