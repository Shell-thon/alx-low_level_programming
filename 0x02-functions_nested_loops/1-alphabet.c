#include "main.h"

/**
 *	print_alphabet - print all alphabet
 *
 *	Description: prints the alphabet in lowercase in ascending order
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar(10);
}
