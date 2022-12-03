#include "main.h"
/**
 * set_bit - function
 * @n: pointer to array of integers
 * @index: given index to set bit to
 *
 * Description: function to set value of bit to 1 at index
 * Return: 1 success, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
