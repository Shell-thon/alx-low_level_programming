#include "main.h"
/**
 * _strncat - C function that copies a string.
 * @dest: Type char
 * @src: Type char
 * @n: Type int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a, b;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
