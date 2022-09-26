#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: First param
 * @b: Second param
 * @n: Third param
 *
 * Return:  string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
