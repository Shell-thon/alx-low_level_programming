#include <stdio.h>
#include "main.h"

/**
 * print_diagsums.c - prints the sum of two diagonals
 * of a square matrix of integer
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of yhe matrix
 */
void int_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
