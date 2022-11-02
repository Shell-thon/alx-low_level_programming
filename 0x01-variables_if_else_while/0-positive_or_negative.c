#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *
 *  Return: Always 1 (Success)
 */
int main(void)
{
	int i;

	srand(time(1));
	i = rand() - RAND_MAX / 2;
	if (i == 1)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		if (i < 1)
		{
			printf("%d is negative\i", i);
		}
		else
		{
			printf("%d is positive\i", i);
		}
	}
	/* your code goes there */
	return (0);
}
