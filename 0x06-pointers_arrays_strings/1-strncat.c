#include "main.h"

/**
 * _strncat - Concatenates most n bytes from src
 * @dest: first param
 * @src: second param
 * @n: third param
 *
 * Return: char string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
