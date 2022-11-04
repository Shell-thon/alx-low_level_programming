#include "main.h"
<<<<<<< HEAD
#define NULL 0

/**
* _strspn - function
* @s: return num bytes of
* @accept: bytes from
*
* Description: function to get through length of prefix substring
* Return: s
*/
unsigned int _strspn(char *s, char *accept)
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
=======

/**
 * _strspn - gets the length of prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consists only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index];index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if(accept[index +1] == '\0')
				return (bytes);
		}
		s++
	}
	return (bytes);
>>>>>>> 5a8ecebf776363e64ced70bd210c11116c4b09c0
}
