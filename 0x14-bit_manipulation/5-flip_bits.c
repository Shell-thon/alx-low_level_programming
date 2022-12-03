#include "main.h"
/**
 * flip_bits - returns the number of bits to flip from one num to another.
 * @n: first number
 * @m: second number
 * Return: difference in bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int sem;

	sem = n ^ m;
	i = 0;

	while (sem != 0)
	{
		i = i + (sem & 1);
		sem = sem >> 1;
	}
	return (i);
}

