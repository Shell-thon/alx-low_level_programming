#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: Type char.
 * Return: 0.
 */
void rev_string(char *s)
{
	int i, c = 0;
	char temp;

	while (s[c] != '\0')
		c++;
	c--;

	for (i = 0; i < c; c--, i++)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}
}
