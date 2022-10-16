#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to int n evrytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
