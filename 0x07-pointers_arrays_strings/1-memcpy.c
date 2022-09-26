#include "main.h"

/**
 * _memcpy - function that copy memory area.
 * @dest: Destination param
 * @src: Source param
 * @n: Length of memory to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
