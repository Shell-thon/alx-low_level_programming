#include "main.h"
#define NULL 0

/**
*  _strspn - function
*  @s: the firat parameter s return num bytes of
*  @accept: the second parameter *accept bytes from
*
* Description: _strspn function to get through 
* length of prefix substring
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
		int i, j, counter;

		counter = 0;

		if (*s == NULL || *accept == NULL)
			return (0);

		for (i = 0; s[1]; i++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					counter;
					break;
				}
				else if (*(accept + j + 1) == '\0')
				{
					return (counter);
				}
			}
		}
		return (counter);
}
