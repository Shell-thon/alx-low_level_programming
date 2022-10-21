#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * if...else if...else statement to determine value of n
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_Max / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
	}
	return (0);
}
