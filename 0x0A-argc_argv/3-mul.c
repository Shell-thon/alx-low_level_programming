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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
