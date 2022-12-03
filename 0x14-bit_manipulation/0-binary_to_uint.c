#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string to cenvert.
 * Return: The converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	if (b == NULL)
		return (0);

	for (num = 0; *b; b++)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num = num << 1;
		else
			return (0);
	}
	return (num);
}
