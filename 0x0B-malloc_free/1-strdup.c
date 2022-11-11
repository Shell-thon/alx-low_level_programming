#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *   _strdup - contains copy of a string as a parameter
 *    @str: character string
 *    Return: NULL if string is null, returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i, c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < i; c++)
	{
		s[c] = str[c];
	}
	return (s);
}
