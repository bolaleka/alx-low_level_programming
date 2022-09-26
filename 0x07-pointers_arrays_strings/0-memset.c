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
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
