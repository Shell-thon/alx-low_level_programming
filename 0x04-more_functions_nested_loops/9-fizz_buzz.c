#include <stdio.h>
/**
* main - entry point
*
* Description: prints the numbers from 1 to 100, followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			putchar(' ');
	}
	printf("\n");
	return (0);
}
