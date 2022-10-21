#include "main.h"
/**
* print_most_numbers - function
*
* Description: print numbers 0-9, do not print 2 or 4 \n.
* Return: none.
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
			else if (i == 2 && i == 4)
			{
				return;
			}
	}
	_putchar(10);
}
