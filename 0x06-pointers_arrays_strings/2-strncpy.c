#include "main.h"

/**
 * _strncpy - function that copy string
 * @dest: first param
 * @src: second param
 * @n: length param
 *
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && dest[i] !=  '\0' && src[i] !=  '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
