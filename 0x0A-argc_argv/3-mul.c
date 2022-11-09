#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: int type
 * @argv: char type
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, val = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			val *= atoi(argv[i]);
		}
		printf("%d\n", val);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
