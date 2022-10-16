#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number to int n everytime
 * it executes and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	if (n>0)
		printf("%d is positve\n", n);
	else if (n==0)
		printf("%d is zero\n", n);
	return (0);
}
