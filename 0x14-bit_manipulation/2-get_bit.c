#include "main.h"
/**
 * get_bit - function
 * @n: value to retrieve
 * @index: index to search
 *
 * Description: function to return a value of a bit at a given index
 * Return: value at index or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	val = (n >> index) & 1;

	return (val);
}
