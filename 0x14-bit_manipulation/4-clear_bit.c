#include "main.h"
/**
 * clear_bit - function
 * @n: pointer to value to set
 * @index: placement of bit to set
 *
 * Description: function to set value of bit to 1 at index
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
