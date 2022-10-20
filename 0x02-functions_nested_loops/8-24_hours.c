#include "main.h"

/**
 * jack_bauer - function
 *
 * Description: prints every minute of the day,
 * starting from 00:00 to 23:59
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hrs;
	int mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar(10);
		}
	}
}
