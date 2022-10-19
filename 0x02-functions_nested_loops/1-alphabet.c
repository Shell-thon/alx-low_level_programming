#include <stdio.h>

/**
 *	print_alphabet - print all alphabet in lowercase
 *
 *	Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	-putchar('\n');
	return (0);
}
